#include<bits/stdc++.h>

using namespace std;

int CountStairs(int num){
    
    int ans = 0;
    if(num == 0 || num == 1){
        return 1;
    }
    else{

        ans = CountStairs(num-1) + CountStairs(num-2);

    }

    return ans;
}

int main(){
    int num;
    cout<<"enter the number of stairs : ";
    cin>>num;

    cout<<"number of ways for reaching the last stair : "<<CountStairs(num);
    return 0;
}