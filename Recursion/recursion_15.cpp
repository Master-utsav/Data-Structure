#include<bits/stdc++.h>

using namespace std;

void ConvertNumToArray( int num , vector<int> &v){
    
    int digit = 0;
    if(num == 0){
        return;
    }

    digit = num%10;
    
    ConvertNumToArray(num/10 , v);
    
    v.push_back(digit);

}

int main(){
    int num = 1234;

    vector<int>v;
    ConvertNumToArray(num , v);

    for(int x : v){
        cout<<x<<"  ";
    }
    cout<<typeid(v).name();
    return 0;
}