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

void getarray( int arr[][4] , int row , int col ){
      
       for( int i = 0 ; i < row ; i++ ){

        for( int j = 0 ; j < col ; j ++){

            cout<<arr[i][j]<<"  ";
        }

        cout<<endl;
    }
}

void transpose(int arr[][4] , int row , int col ){

    for( int i = 0 ; i < row ; i ++ ){

        for( int j = i ; j < col ; j ++ ){
            swap(arr[i][j] , arr[j][i]);
            
        }
    }
    
}

int main(){
    int row = 4;
    int col = 4;

    int arr[4][4];
    setarray(arr , row , col);

    cout<<" before transpose : "<<endl;
    getarray( arr , row , col );

    transpose(arr , row , col);

    cout<<" after transpose : "<<endl;
    getarray( arr , row , col );


    return 0;
}