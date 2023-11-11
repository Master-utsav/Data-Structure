#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;


void sumEquals(vector<int>v , int num){
    
     for ( int i = 0 ; i < v.size() ; i++ ){

        for ( int j = i ; j < v.size() ; j++ ){
            if(num - v[i] == v[j] ){
                cout<<"Number found at index "<<i<<" and "<<j<<" are "<<v[i]<<" and "<<v[j];
                return;
            }
        }
     }
     cout<<"there is no such values in the given array whose sum is equal to your sum value";
     
}


int main(){
    
    vector<int>v;
    int n;
    cout<<"enetr the index of an array : ";
    cin>>n;

    for( int i = 0 ; i < n ; i ++ ){

        int d;
        cin>>d;
        v.push_back(d);

    }
    
    int Sum;
    cout<<" enetr the Sum vlaue: ";
    cin>>Sum;

    sumEquals(v , Sum);

   
    return 0;
}