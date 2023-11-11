#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

int main(){
    
    // int arr[] = { 10 , 20 , 30 , 40 , 50 };
    // int n = 5 ;
    
    // int tmp = arr[0];
    // for( int i = 1 ; i < n ; i++ ){

    //     cout<<arr[i]<<"  ";
    // }
    
    // cout<<arr[0];
    int n ;
    cout<<"enetrt the imdex of araray : ";
    cin>>n ;

    int arr[n];

    for(int i = 0 ; i < n ; i++ ){

        cin>>arr[i];
    }
    
    cout<<"your array is : ";
    for(int i = 0 ; i < n ; i ++ ){

        cout<<arr[i]<<"  "; 
    }
    
    cout<<endl;
    cout<<"after shifting one element to the right : ";
    
    int temp = arr[0];
    for ( int i = 1 ; i < n  ; i ++ ){
     
        
        cout<<arr[i]<<"  ";
        
   }
   cout<<temp<<"  ";
  
    return 0;
}