#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

// only for contiunous natural number 

int MissingNumber(vector<int>v){

    int s = 0 ;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;

    while(s<=e){
        
        if( s == e){
            return s+1;
        }
        if(v[mid] == mid+1){
            s = mid + 1;
        }
        else{

            e = mid;
        }

        mid = s + (e-s)/2;

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

    if(MissingNumber(arr) == -1){
        cout<<"there is no missing elemnet";
    }
    else{
        cout<<"missing element is : "<<MissingNumber(arr);
    }
    
    return 0;
}