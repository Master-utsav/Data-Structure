#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

int missingnumber(vector<int>v){
    int n = v[v.size()-1];
    int sumN = (n*(n+1))/2;
    int sumA = 0;

    for(int i = 0 ; i < v.size() ; i++ ){
        sumA = sumA + v[i];
    }
    
    return sumN - sumA;
}

int main(){
    vector<int>v;
    int n;
    cout<<"enter the number of index : ";
    cin>>n;

    for( int i = 0 ; i < n ; i++ ){
        int d;
        cin>>d;
        v.push_back(d);
    }

    cout<<"missing number : "<<missingnumber(v);

    return 0;
}