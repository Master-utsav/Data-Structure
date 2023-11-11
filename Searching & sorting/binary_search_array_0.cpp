#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

int binarysearch(int arr[] , int size , int target){

    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;
    int ans = -1;
    
    while(start <= end ){

    if(arr[mid] == target){
        ans = mid;
        return ans;
    }
    else if( target > arr[mid] ){
          start = mid + 1;
    }
    else if( target < arr[mid] ){
          end = mid - 1;
    } 
    
    mid = (start + end) /2;
    
    }
    
    return ans;
}


int main(){
   
   int arr[] = { 1 ,2, 3, 5, 7 ,8 ,9 ,0 , 90};
   int n = 9 ;
   int target = 3;

   int ans = binarysearch(arr,n,target);
   
   if( ans == -1  ){
      cout<<"elemnet not found ";
   }

   else{
     cout<<"elemnet found at index: "<<ans;
   }
    return 0;
}