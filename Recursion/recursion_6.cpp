#include<bits/stdc++.h>

using namespace std;

void Printarray(int *arr , int size , int index){

    if(index == size){
        return;
    }

    cout<<arr[index]<<"  ";

    Printarray(arr , size , index + 1);
}

int main(){
    int newaar[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int index = 0;
    Printarray(newaar, size , index);
    return 0;
}