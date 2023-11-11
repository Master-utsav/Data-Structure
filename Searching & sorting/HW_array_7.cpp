#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

void negative_shift(vector<int>v){
    
    int j = 0 ;
    for( int i = 0 ; i < v.size() ; i ++ ){
        if(v[i] < 0){
           swap(v[i] , v[j]);
           j++;
        }
    }
    for( int i = 0 ; i < v.size() ; i++ ){
        cout<<v[i]<<"  ";
    }
}

int main(){
    
    vector<int>arr;

    int n;
    cout<<"enetr the index of an array : ";
    cin>>n;
    
    cout<<"enter the values of an array : ";
    for( int i = 0 ; i<n ; i++ ){
        int d;
        cin>>d;
        arr.push_back(d);
    }

    negative_shift(arr);

    return 0;
}