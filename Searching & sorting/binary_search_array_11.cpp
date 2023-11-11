#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

// search target in nearly sorted array 

int Targetelement(vector<int>&v , int target){

    int s = 0 ;
    int e = v.size() - 1;
    int mid = s + ( e - s )/2;

    while(s<=e){
        if(v[mid] == target){
            return mid;
        }
        else if(mid - 1 >=0 && v[mid - 1] == target){
            return mid - 1;
        }
        else if(mid + 1 < v.size() && v[mid + 1] == target){
            return mid + 1;
        }
        else if(v[mid] < target){
            s = mid + 2;
        }
        else {
            e = mid - 2;
        }
       
       mid = s + ( e - s )/2;

    }

    return -1;
}


void printarray(vector<int> v){
     
     for( int i = 0 ; i < v.size() ; i++ ){
        
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

    int target;
    cout<<"enter the target element : ";
    cin>>target;

    int ans = Targetelement(arr , target);

    if( ans == - 1){
        cout<<"target element not found ";
    }
    else{
        cout<<"target element found at index : "<<ans;
    }
  
    return 0;
}