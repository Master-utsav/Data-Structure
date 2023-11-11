#include<bits/stdc++.h>

using namespace std;

int Binsearch(int arr[] , int s , int e , int target){
    
    if(s>e){
        return -1;
    }

    int mid = s + (e-s)/2;

    if(target == arr[mid]){
        return mid;
    }
    if(target > arr[mid]){
        return Binsearch(arr , mid+1 , e , target);
    }
    else{
        return Binsearch(arr , s , mid -1 , target);
    }
  
}

int main(){

    int arr[] = {12,24,56,78,99,100,121,134,1345};
    int e = 8;
    int s = 0;
    int target = 134;

    int ans = Binsearch(arr , s , e , target);

    cout<<ans;

    return 0;
}