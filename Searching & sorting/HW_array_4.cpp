#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

void RemoveDuplicate(vector<int>v){
   
   for(int i = 0 ; i < v.size() ; i++ ){
     
     if(v[i] < v[i+1]){
          cout<<v[i]<<"  ";
        }
    
    else{
        
          if(v[i] > v[i+1]){
          cout<<v[i]<<"  ";
          }
          else if(i == v.size() - 1 ){
          cout<<v[i]<<"  ";
          }

        } 

    }

}

void Printarray(vector<int>arr){

    for( int i = 0 ; i < arr.size() ; i++ ){
        cout<<arr[i]<<"  ";
    }

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
    cout<<"Your array is : ";
    Printarray(v);

    cout<<endl;

    cout<<"after removing duplicate's array look like : ";
    RemoveDuplicate(v);

    return 0;
}