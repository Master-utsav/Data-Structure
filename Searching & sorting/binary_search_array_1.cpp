#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

int firstoccurence(vector<int>arr , int target){

    int s = 0 ;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while( s<= e){
    if(arr[mid] == target){
         ans = mid;
         e = mid - 1;
    }
    else if(target > arr[mid]){
        s = mid + 1;
    }
    else if(target < arr[mid]){
        e = mid - 1;
    }

    mid = s + (e-s)/2;

    }

    return ans;

}

int main(){
    
    vector<int>v;
    
    int n;
    cout<<"enter the number of index : ";
    cin>>n;
    
    for( int i = 0 ; i < n ; i ++ ){
        int d;
        cin>>d;
        v.push_back(d);
    }

    int target;
    cout<<"enter the target element : ";
    cin>>target;

    int answer = firstoccurence(v , target );

    if( answer == -1){
        cout<<"element not found";
    }
    else{
    cout<<"At index : "<<answer<<" , "<<target<<" first occur  ";
    }

    
    return 0;
}