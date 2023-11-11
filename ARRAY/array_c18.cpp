#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

void getdata( int arr[] , int n ){

    cout<<" your array is : ";

    for ( int i = 0 ; i < n ; i ++ ){

        cout<<arr[i]<<"  ";

    }
}

void Shifting( int arr[] , int shift , int n ){
    
    
    cout<<"enetr the no. of elemnets by which you want to shift your array : ";
    cin>>shift;

    int shift_arr[shift];

    for( int i = 0 ; i < shift ; i ++ ){

           shift_arr[i] = arr[i];
          
    }

    for(int i = shift ; i < n ; i++ ){

        cout<<arr[i]<<"  ";
    }

    for( int i = 0 ; i < shift ; i++ ){

        cout<<shift_arr[i]<<"  ";
    }
    
}

int main(){
    
    int n;
    int shift;
    cout<<"enter the last index of an array : ";
    cin>>n;
    
    int arr[n];

    for ( int i = 0 ; i < n ; i ++ ){

        cin>>arr[i];

    }

    getdata(arr,n);
    cout<<endl;
    Shifting(arr,shift,n);

    return 0;
}