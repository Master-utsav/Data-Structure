#include<bits/stdc++.h>

using namespace std;

void Printevenvalue( int *arr , int size , int index , vector<int>&v){
        
        if(index >= size){
            return;
        }
            if(arr[index] % 2 == 0){
                
                v.push_back(arr[index]);
            }
    Printevenvalue(arr , size , index+1 , v);     
}

int main(){
    int arr[] = {10,34,13,33,45,67,32,55,10};
    int size = 9;
    int index = 0;
    vector<int>ans;
    
    Printevenvalue(arr,size,index,ans);
    for(int num : ans){
        cout<<num<<"  ";
    }

    return 0;
}