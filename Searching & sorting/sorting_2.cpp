#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

void insertion_sort(vector<int>&v){
    for( int i = 0 ; i < v.size() ; i++ ){
        int key = v[i];
        int j = i - 1;

        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
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

    insertion_sort(arr);

    cout<<"your array after sorting : ";
    printarray(arr);
    cout<<endl;
    return 0;
}