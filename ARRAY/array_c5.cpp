#include<iostream>
#include<string>
#include<cmath>

using namespace std;

bool targetarray( int arr[] , int size , int target ){

    for ( int i = 0 ; i < size ; i++ ){

        if( arr[i] == target ){
           
           return true;
        }
    }
          return false;
}

int main(){
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int target;

    cout<<"guess the number in array: ";
    cin >> target ; 
   
    bool ans = targetarray(arr , n , target );

    if(ans == true){
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }

    return 0;
}