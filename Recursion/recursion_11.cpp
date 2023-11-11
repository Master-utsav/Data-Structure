#include<bits/stdc++.h>

using namespace std;

void Doubleeachelement(int *arr , int size , int index){

    if(index >= size){
        return;
    }
    
    arr[index] = 2*arr[index];
    
    cout<<arr[index]<<"  ";
    Doubleeachelement(arr , size , index+1);
}

int main(){
    int arr[] = {12,14,15,16};
    int size = 4;
    int index = 0;
    Doubleeachelement(arr , size , index);
    return 0;
}