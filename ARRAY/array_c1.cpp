#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){
    
    int arr[5];
    int sum = 0 ;

    for( int i = 0 ; i < 5 ; i++ ){

        cout<<"enert the value in index : "<<i<<"\t";
        cin>>arr[i];
        
    }

    for( int i = 0 ; i < 5 ; i++ ){

        cout<<arr[i]<<"\t";
    }
    
    cout<<endl;

    for( int i = 0 ; i < 5 ; i++ ){
        
        sum = sum + arr[i];
    }

    cout<<"sum of all value of array is: "<<sum;
    return 0;
}