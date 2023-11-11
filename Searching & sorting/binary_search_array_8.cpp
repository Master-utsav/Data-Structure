#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

// pivot element here pivot refers to max elemnet 

int pivotIndex(vector<int>&v){

    int s = 0 ;
    int e = v.size() - 1;
    int mid = s + ( e-s )/2;
    int ans = -1;

    while(s <= e){
      
        if(mid - 1 >= 0 && v[mid] < v[mid-1]){
            
           return  mid - 1;
        }

        else if(mid + 1 < v.size() && v[mid] > v[mid + 1]){
           
            return mid;
        }

        else if(v[s] > v[mid]){

            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }

    return ans;
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

    cout<<"pivotIndex for rotated and sorted array is : "<<arr[pivotIndex(arr)];

    return 0;
}