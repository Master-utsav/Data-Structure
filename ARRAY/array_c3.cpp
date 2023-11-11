#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){
    
    int arr[] = {5, 10 , 15 , 18 , 21};
    int n = 5;
    int target;
    int i;

    cout<<"guess the number in aaray : ";
    cin>>target;

    for( i = 0 ; i < 5 ; i++ ){

        if(arr[i] == target){

            cout<<"target found";
            break;
        }
    }
    if( i == 5 ){
         cout<<" target not found";
    }
    
    return 0;
}