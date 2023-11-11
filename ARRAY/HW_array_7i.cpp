#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

void negativeshift( int arr[] , int n ){

    int neg_count = 0 ;
    int posi_count = 0 ;

    for( int i = 0 ; i < n ; i ++ ){

        if( arr[i] < 0 ){
            neg_count++;
        }
        if( arr[i] >= 0 ){
            posi_count++;
        }
    }
    int storage[posi_count];

    for( int i = 0 ; i < n ; i ++ ){
        if( arr[i] >= 0 ){
           storage[i] = arr[i] ;
        }
    }

    cout<<"after shifting negative and positive : ";
    
    for( int i = 0 ; i < n ; i++ ){
        
        if(arr[i] < 0){
        cout<<arr[i]<<" , ";
        }
    }
    for( int i = 0 ; i < n ; i++ ){
        
        if(arr[i] >= 0){
        cout<<storage[i]<<" , ";
        }
        
    }
}

int main(){

    int n;
    cout<<"enetr the last index of an array : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i ++ ){
        cin>>arr[i];
    }
    
    cout<<"your array is : ";

    for( int i = 0 ; i < n ; i ++ ){
         cout<<arr[i]<<" , ";
    }

    cout<<endl;

    negativeshift( arr , n );

    return 0;
}