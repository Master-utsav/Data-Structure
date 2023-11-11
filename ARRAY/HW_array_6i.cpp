#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

// sort colors
using namespace std;

void arraysort( int arr[] , int size){

    int redcount = 0;
    int bluecount = 0;
    int greencount = 0;

    for(int i = 0 ; i < size ; i ++ ){

        if(arr[i] == 1){
            redcount++;
        }
        if(arr[i] == 2){
            bluecount++;
        }
        if(arr[i] == 3){
            greencount++;
        }
    }

    cout<<"there are : "<<redcount<<" red balls in bucket"<<endl;
    cout<<"there are : "<<bluecount<<" blue balls in bucket"<<endl;
    cout<<"there are : "<<greencount<<" green balls in bucket"<<endl;

    cout<<"now after sorting of all balls we have : ";

    for( int i = 0 ; i < redcount ; i++ ){

        arr[i] = 1 ;
        cout<<arr[i]<<" , ";
    }
    for( int i = 0 ; i < bluecount ; i++ ){

        arr[i] = 2;
        cout<<arr[i]<<" , ";
    }
    for( int i = 0 ; i < greencount ; i++ ){

        arr[i] = 3;
        cout<<arr[i]<<" , ";
    }
}

int main(){
    
    int n;
    cout<<"how many balls you have in a bucket : ";
    cin>>n;

    int arr[n];

    cout<<"enter the colors of ball 1 for red ; 2 for blue ; 3 for green "<<endl;

    for(int i = 0 ; i < n ; i ++ ){
        cin>>arr[i];
    }

    cout<<"your bucket has balls of color : ";

    for( int i = 0 ; i < n ; i ++ ){
         cout<<arr[i]<<" , ";
    }

    cout<<endl;

    arraysort( arr , n );

    return 0;
}