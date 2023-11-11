#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){
    
    int arr[] = { 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1};
    int n = 14;
    int ZeroCount = 0;
    int IntCount = 0;

    for(int i = 0 ; i < n ; i ++ ){

        if(arr[i] == 1 ){
            IntCount++;
        }

        if(arr[i] == 0 ){
            ZeroCount++;
        }
    }

    cout<<"given array has : "<<IntCount<<" , 1's "<<endl;
    cout<<"given array has : "<<ZeroCount<<" , 0's "<<endl;

    return 0;
}