#include<bits/stdc++.h>

using namespace std;

int factorial(int num){

    if(num==0 || num==1){
        return 1;
    }
    else{
        int recursionAns = factorial(num-1);
        int finalAnswer = num*recursionAns;
        return finalAnswer;
    }
}

int main(){
   
   cout<<factorial(5);
    return 0;
}