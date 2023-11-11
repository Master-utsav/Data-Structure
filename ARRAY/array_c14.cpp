#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){
    
    int arr[] = { 1, 2, 3 };
    int n = 3;
    int sum;

    for(int i = 0 ; i < n ; i++ ){

        for(int j = 0 ; j < n ; j++ ){

            for(int k = 0 ; k < n ; k++ ){
               
                sum = arr[i] + arr[j] + arr[k];
                cout<<"( "<<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<" ) : sum is : "<<sum<<endl;
            }
        }
    }
    

    return 0;
}