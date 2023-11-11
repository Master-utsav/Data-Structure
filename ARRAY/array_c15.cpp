#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void Numcount( int arr[] , int size){

    int Zerocount = 0 ;
    int Onecount = 0 ;
    
    for(int i = 0 ; i < size ; i++ ){
    if(arr[i] == 1){
        Onecount++;
    }
    if(arr[i] == 0 ){
        Zerocount++;
    }
    }
    
    cout<<"after sorting of 0's and 1's we get array : ";
  
    for( int i = 0 ; i < Zerocount ; i++ ){
        
        arr[i] = 0;
        cout<<arr[i]<<"  ";
    }
    
    for( int k = 0 ; k < Onecount  ; k++ ){
        
        arr[k] = 1;
        cout<<arr[k]<<"  ";
    }

}


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

    Numcount( arr , n );
    
    return 0;
}