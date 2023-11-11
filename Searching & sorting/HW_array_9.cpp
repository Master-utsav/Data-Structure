#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

void setarray(vector<int> &v , int n ){

    for( int i = 0 ; i < n ; i ++ ){

    int d;
    cin>>d;
    v.push_back(d);

    }
}

void getarray(vector<int> &v){

    for( int i = 0 ; i < v.size() ; i++ ){
        cout<<v[i]<<"  ";
    }
}

void bubble_sort(vector<int> &v){
    
    for( int i = 0 ; i < v.size() ; i++ ){

        for( int j = 0 ; j < v.size() - i - 1 ; j ++){

            if(v[j] > v[j + 1]){
                swap(v[j] , v[j+1]);
            }
        }
    }
}

int repeating(vector<int> &v){
     
    for( int i = 0 ; i < v.size() ; i++ ){
        if(v[i] == v[i+1]){
            return v[i];
        }
    }
    return -1;
}

void Printrepeat(vector<int> &v){

    cout<<"Reapeating element is : ";
    if(repeating(v) == -1 ){
        cout<<"NULL";
    }
    else{
        cout<<v[repeating(v)];
    }
}

int MissingNumber(vector<int> &v){
    int sum = 0;
    int n = v[v.size()-1];
    int sumTot = (n*(n+1))/2;


    for( int i = 0 ; i < v.size() ; i ++ ){
        sum = sum + v[i];
    }

    return sumTot - sum;

}


int main(){
    
    vector<int>v;

    int n;
    cout<<"enter the number of index : ";
    cin>>n;
    
    cout<<"enter the vlaues of an array : ";
    setarray(v , n );

    cout<<"your array is : ";
    getarray(v); 
    cout<<endl;

    cout<<"after sorting the elemnets of an array : ";
    bubble_sort(v);

    getarray(v); 
    cout<<endl;
    

    cout<<"after removing dipicate from a given array : ";
    for( int i = 0 ; i < v.size() ; i++ ){

        if(v[i] < v[i + 1]){
            cout<<v[i]<<"  ";
        }
        if(i == v.size() - 1){
            cout<<v[i]<<"  ";
        }
    }
    cout<<endl;
    
    cout<<"now array looks like : ";
    getarray(v); 
    cout<<endl;

    // cout<<"missing number is : "<<MissingNumber(v)<<endl;

    cout<<"Missing Number is : "<<MissingNumber(v) + repeating(v) ;
    cout<<" and ";
    Printrepeat(v);

    return 0;
}