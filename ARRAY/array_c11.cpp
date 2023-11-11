#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int getunique(int arr[] , int size){
    
    int ans = 0;
    for ( int i = 0 ; i < size ; i ++ ){
       
        ans = ans^arr[i];
   
    }
    return ans;

  
}


int main(){
    int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    {
        int n = 9;

        int finalanswer = getunique(arr , n);
        cout<<finalanswer;
    }
    return 0;
}