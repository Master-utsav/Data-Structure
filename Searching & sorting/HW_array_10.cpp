#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;


void bubble_sort(vector<int>&v){
    
    for( int i = 0 ; i < v.size() ; i ++ ){

        for( int j = 0 ; j < v.size() - i - 1 ; j ++ ){
            if(v[j] > v[j+1]){
                swap(v[j] , v[j+1]);
            }
        }
    }
}

int firstrepeat(vector<int>&v){

    for( int i = 0 ; i < v.size() ; i ++ ){
        if(v[i] == v[i+1]){
            return i;
        }
    }
    return -1;
}

void printarray(vector<int>v){

    for ( int i = 0 ; i < v.size() ; i ++ ){
        cout<<v[i]<<"  ";
    }
}

int main(){
    vector<int>arr;

    int n;
    cout<<"enetr the indexes of an array : ";
    cin>>n;
    
    cout<<"enter the vlaues for an array : "<<endl;

    for(int i = 0 ; i < n; i++ ){
        int d;
        cin>>d;
        arr.push_back(d);
    }
    
    cout<<"your array is : ";
    printarray(arr);
    cout<<endl;

    cout<<"after sorting an array : ";
    bubble_sort(arr);
    printarray(arr);
    cout<<endl;

    if(firstrepeat(arr) == -1 ){
        cout<<"no reapting element found ";
    }
    else{
        cout<<"first reapting eklement is : "<<arr[firstrepeat(arr)];
    }

    return 0;
}