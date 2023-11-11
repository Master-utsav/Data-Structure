#include<bits/stdc++.h>

using namespace std;

void targetOccurenceArray( int *arr , int size , int index , int target , vector<int> &v){

    if( index >= size){
        return;
    }
    if(target == arr[index]){
        v.push_back(arr[index]);
    }

    targetOccurenceArray(arr , size , index+1 , target , v);
}

int main(){
    
    int arr[] = {1,2,3,4,4,3,3,3,3,2,1};
    int size = 11;
    int target = 3;
    int index = 0;
    vector<int>v;

    targetOccurenceArray(arr , size , index , target , v);

    for( int x : v){
        cout<<x<<"  ";
    }
    
    return 0;
}