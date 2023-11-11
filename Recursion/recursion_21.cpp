#include<bits/stdc++.h>

using namespace std;

int CoinChange( vector<int> &coin , int amount ){

    if(amount == 0){
        return 0;
    }

    if( amount < 0){
        return INT_MAX;
    }
    
    int mini = INT_MAX;
    int ans = INT_MAX;

    for( int i = 0 ; i < coin.size() ; i++){

        if(coin[i] <= amount){
            int recans = CoinChange(coin , amount-coin[i]);

            if(recans != INT_MAX){
                ans = 1 + recans;
                mini = min(mini , ans);
            }

           
        }

    }

    return mini;
}

int main(){
    
    vector<int>v;
    int size;

    cout<<"enter the number of index : ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){

        int d;
        cin>>d;
        v.push_back(d);

    }

    int amount;
    cout<<"enter the amount you want to make from the given coins : ";
    cin>>amount;
    
    cout<<"minimum number of coins required is : "<< CoinChange(v , amount);
    

   

    return 0;
}