#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

void selection_sorting(vector<int>&v){

    for( int i = 0 ; i < v.size() ; i++ ){
        int minIndex = i;
        for(int j = i ; j < v.size() ; j++ ){
            if(v[j] < v[minIndex]){
            minIndex = j;
            }
        }

        swap(v[i] , v[minIndex]);
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

    selection_sorting(arr);

    cout<<"your array after sorting : ";
    printarray(arr);
    cout<<endl;

    return 0;
}