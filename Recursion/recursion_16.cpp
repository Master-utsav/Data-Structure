#include<bits/stdc++.h>

using namespace std;

void ArraytoNum(int *arr , int size , int index , int &num){
       
       
       int mulp = size -1;
       if(index >= size || mulp < 0){
        return;
       }

       ArraytoNum(arr , mulp-1 , index+1 , num );   

       num = pow(10,(mulp))*arr[index] + num;
}

int main(){
    
    int arr[] = {1,2,3,4};
    int size = 4;
    int index = 0;
    int num = 0;
    
    ArraytoNum(arr , size , index , num );
    cout<<num;

    return 0;
}