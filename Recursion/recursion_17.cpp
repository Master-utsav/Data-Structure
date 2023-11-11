#include<bits/stdc++.h>

using namespace std;

bool Checksorted(int arr[] , int size , int index){
     
     if(index >= size){
        return true;
     }

    //  if(arr[index] <= arr[index-1]){
    //     bool ans = Checksorted(arr , size , index+1);
    //     return ans;
    //  }
    //  else{
    //        return false;
    //  }

     if(arr[index] >= arr[index-1]){
        bool ans = Checksorted(arr , size , index+1);
        return ans;
     }
     else{
           return false;
     }
       
}

int main(){
    int arr[] = {1,2,6,4,5};
    int size = 5;
    int index = 1;

    bool isans = Checksorted(arr , size , index);

    if(isans){
        cout<<"yes it is a sorted array";
    }
    else{
        cout<<"array is not sorted";
    }

    return 0;
}