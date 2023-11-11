#include<bits/stdc++.h>

using namespace std;

int SUM(int n){

    if(n==1){
        return 1;
    }
    else{
        int ans = n + SUM(n-1);
        return ans;
    }
}

int main(){
    
    cout<<SUM(10);
    return 0;
}