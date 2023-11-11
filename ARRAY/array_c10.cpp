#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;



int main(){
      
    int n ;
    cout<<"enter the last index of your array: ";
    cin>>n;

    int arr[n];
    
    cout<<"enter the vlaues for array : "<<endl;
    for ( int i = 0 ; i < n ; i++ ){
        cin>>arr[i];   
    }

    cout<<"Your array is: ";
    for( int i = 0 ; i < n ; i++ ){
         cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
    cout<<"Extereme of your given array is: ";

    int i = 0;
    int k = n-1;

    while( i <= k ){
        cout<<arr[i]<<"  ";
        i++;
        if(i<k){
        cout<<arr[k]<<"  ";
        k--;
        }
    } 

    return 0;
}