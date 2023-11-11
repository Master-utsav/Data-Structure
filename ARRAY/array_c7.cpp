#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

int Max_in_array( int arr[] , int size ){
    
    int Maxans = INT_MIN;

    for( int i = 0 ; i < size ; i ++ ){

        if ( arr[i] > Maxans){

             Maxans = arr[i];
        }
    }
    return Maxans;
}

int Min_in_array( int arr[] , int size ){
    
    int Minans = INT_MAX;
    for( int i = 0 ; i < size ; i ++ ){

        if ( arr[i] < Minans){

             Minans = arr[i];
        }
    }

    return Minans;
}

int main(){
    
    int arr[] = {30 , 34, 567, 7, 85, 2, 232, 4, 6 };
    int n = 9; 

    cout<<"Maximun value in the array is: "<<Max_in_array(arr , n)<<endl;
    cout<<"Minimum value in the array is: "<<Min_in_array(arr , n);

    return 0;
}