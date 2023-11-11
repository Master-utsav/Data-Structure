#include<bits/stdc++.h>

using namespace std;

void arrsizeof( int arr[] , int size){
    cout<<" inside the function size of array : "<<sizeof(arr)<<endl;

    cout<<" inside function : "<<arr<<endl;
    cout<<" inside function : "<<&arr<<endl;   // actually arr stores in a new adresss inside a function
}

int main(){
    
    int arr[] = {12,3,4,5,5,89};
    int size = 6;
    
    cout<<"outsize the function size of array is : "<<sizeof(arr)<<endl;

    arrsizeof(arr , size);

    cout<<" outside function : "<<arr<<endl;
    cout<<" outside function : "<<&arr<<endl;

    

    return 0;
}