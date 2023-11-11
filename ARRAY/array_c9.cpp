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

    for(int i = 0, k = n-1 ; i<k ;  i++ , k--){

        swap(arr[i],arr[k]);

    }

    cout<<"reversed array is : ";

    for( int i = 0 ; i < n ; i++ ){
         cout<<arr[i]<<"  ";
    }
    return 0;
}