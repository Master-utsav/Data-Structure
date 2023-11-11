#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

void Printarray( int arr[][4] , int row , int col){

   for( int i = 0 ; i < row ; i ++ ){

    for( int j = 0 ; j < col ; j ++ ){
        cout<<arr[i][j]<<"  ";
    }

    cout<<endl;
   }
}

void colarray( int arr[][4] , int row , int col){

   for( int j = 0 ; j < col ; j ++ ){

    for( int i = 0 ; i < col ; i ++ ){
        cout<<arr[j][i]<<"  ";
    }

    cout<<endl;
   }
}

void setarray( int arr [][4] , int row , int col ){
         
         
    for( int i = 0 ; i < row ; i++ ){

        for( int j = 0 ; j < col ; j ++){

            cin>>arr[i][j];
        }
    }
}

int main(){
     
    int row = 3;
    int col = 4;

    int arr[3][4];

    setarray( arr , row , col );
    Printarray( arr , row , col);
    colarray(arr , row , col);
    return 0;
}