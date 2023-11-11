#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

int main(){
    int arr[5];
    int n = 5;

    cout<<"enter the values in array"<<endl;

    for( int i = 0 ; i < n ; i++ ){
        cin>>arr[i];
    }
    
    cout<<"array is: ";
    for( int i = 0 ; i < n ; i++ ){
    cout<<arr[i]<<"  ";
    }
    cout<<endl;

    for( int i = 0 ; i < n ; i++ ){
        
        int temp;
        if(i<=n/2){
           temp = arr[i];
           arr[i] = arr[n-i-1];
           arr[n-i-1] = temp;
        }
    }

    cout<<"reverse of an array is: ";
    for( int i = 0 ; i < n ; i++ ){
    cout<<arr[i]<<"  ";
    }

    return 0;
}