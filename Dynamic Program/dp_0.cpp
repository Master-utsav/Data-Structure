#include<bits/stdc++.h>

using namespace std;

// print fibonacci by using dp memo allocatiion 

int Fib( int n , vector<int> &v , vector<int> &memo)
{
    for(int i = 0 ; i < n ; i++){
        if(v[i] == memo[i]){
            return memo[i];
        }
    }

    if(n <= 2){
        return 1;
    }

    v[n] = Fib(n-1 , v , memo) + Fib(n-2 , v , memo);
    memo[n] = v[n];

    return memo[n];
    
}
int main(){

    int n;
    vector<int>v;
    vector<int>memo;

    cout<<"enter the nth position : ";
    cin>>n;
    
    cout<<"Number is : "<<Fib(n , v , memo);

    return 0;
}