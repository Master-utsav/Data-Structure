#include<bits/stdc++.h>

using namespace std;

void PrintSearchElement(int *arr , int size , int index , int target , int &count){
    
    
    if(index >= size){
        return;
    }
    if(target == arr[index]){
        count++;
    }
    PrintSearchElement(arr , size , index+1 , target , count);   
}

int main(){
    int arr[] = {12,14,15,16 , 1,2,1,1};
    int size = 8;
    int index = 0;
    int target = 1;
    int count = 0;
    PrintSearchElement(arr , size , index , target , count);
    cout<<count;
    return 0;
}