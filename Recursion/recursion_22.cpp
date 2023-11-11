#include<bits/stdc++.h>

using namespace std;


int HouseRob(vector<int>&num , int index){
    
    if(index >= num.size()){
        return 0;
    }

    int opt1 = num[index] + HouseRob(num , index + 2);
    int opt2 = 0 + HouseRob(num  , index + 1);

    int maxi = max(opt1 , opt2);

    return maxi;
}
int main(){

    vector<int>v;
    int size;
    int index = 0;

    cout<<"enter the number of houses : ";
    cin>>size;
    
    cout<<"enter the amount available in each house : ";
    for(int i = 0 ; i < size ; i++){

        int d;
        cin>>d;
        v.push_back(d);

    }

    cout<<"max amount thief can rob without alerting police is : "<<HouseRob(v , index);

    return 0;
}