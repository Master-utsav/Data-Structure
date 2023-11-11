#include<bits/stdc++.h>

using namespace std;

int Fabonacci(int num){

    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        int ans = Fabonacci(num-1) + Fabonacci(num-2);
        return ans;
    }
 
}

int main(){
    
    cout<<Fabonacci(7);
    return 0;
}