#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

void setarray( int arr [][4] , int row , int col ){
         
         
    for( int i = 0 ; i < row ; i++ ){

        for( int j = 0 ; j < col ; j ++){

            cin>>arr[i][j];
        }
    }
}

int Maxofarray( int arr[][4] , int row , int col ){

    int maxans = INT_MIN;

    for( int i = 0 ; i < row ; i++ ){

        for ( int j = 0 ; j < col ; j++ ){
            if(arr[i][j] > maxans){
                maxans = arr[i][j];
            }
        }
    }
    
    return maxans;
}

int main(){
    
    int row = 3;
    int col = 4;

    int arr[3][4];
    setarray(arr , row , col);
    cout<<"max in array : "<<Maxofarray(arr , row , col);

    return 0;
}