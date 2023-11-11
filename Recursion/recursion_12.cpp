#include<bits/stdc++.h>

using namespace std;

int TargetelementIndex( int *arr , int size , int index , int target){
      
      if(index >= size){
        return -1;
      }

      if(target == arr[index]){
          return index;
      }

      TargetelementIndex(arr , size , index+1 , target);

}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int target = 6;
    int size = 7;
    int index = 0;

    cout<<TargetelementIndex(arr , size , index , target);
    return 0;

}