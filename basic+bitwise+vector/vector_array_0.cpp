#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>
#include<vector>

using namespace std;

void printarray(vector<int>v){

    int size = v.size();

    // for( int i = 0 ; i < size ; i ++ ){
    //     cout<<v[i]<<"  ";
    //     // cout<<v.at(i)<<"  "; // same as v[i]
    // }

    for( int utsav:v){
        cout<<utsav<<"  ";
    }
}


int main(){
    //vector initialization
     vector<int>v;

     vector<int>arr( 5 , -8); // init with size of 5 and specific data which is -8 in this case
     printarray(arr);
     cout<<endl;

     vector<int>arr2 = { 1 , 2, 43, 5 };
     printarray(arr2);
     cout<<endl;

     vector<int>arr3(arr2);
     printarray(arr3);
     cout<<endl;
     
    //insert
    v.push_back(1);
    v.push_back(10);
    v.push_back(20);
    v.push_back(120);
    v.push_back(40);
    
    // delete or pop ( always delte form the the last here 40 delete first )
    v.pop_back();
    printarray(v);
    cout<<endl;

    v.pop_back();
    printarray(v);
    cout<<endl;

    v.pop_back();
    printarray(v);
    cout<<endl;

    v.pop_back();
    printarray(v);
    cout<<endl;

    v.pop_back();
    printarray(v);
    cout<<endl;
    
    cout << " enetr the elements of an array : ";
    // user enter input in array 
    int n; 
    cin>>n ;
    
    for( int i = 0 ; i < n ; i ++ ){
        int d;
        cin>>d;
        v.push_back(d);
    }
   
    cout<<"first elemnet of the array is : "<<v.front()<<endl;
    cout<<"last elemnet of the array is : "<<v.back()<<endl;
 
    // we can add more input we dont have to care about the size of an array 
    for ( int i = 0 ; i < 10 ; i ++ ){

        v.push_back(81);
    }

    printarray(v);

    v.clear(); // for clear vector

    printarray(v);

    return 0;
}