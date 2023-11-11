#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

void counting( int arr[] , int n ){
    
    int zero = 0;
    int one = 0;
    int two = 0;

    for ( int i = 0 ; i < n ; i ++ ){
        
        if(arr[i] == 0 ){
            zero++;
        }
        if(arr[i] == 1 ){
            one++;
        }
        if(arr[i] == 2 ){
            two++;
        }
    }

    for( int i = 0 ; i < zero ; i ++ ){

         arr[i] = 0;
         cout<<arr[i]<<"  ";
         
    }

    for( int j = 0 ; j < one  ; j ++ ){
      
         arr[j] = 1;
         cout<<arr[j]<<"  ";
         }
    

    for( int k = 0 ; k < two ; k ++ ){

         arr[k] = 2;
         cout<<arr[k]<<"  ";
         }
    }


int main(){
    
    int n ;
    cout<<"enetr the index of an array : ";
    cin>> n ;

    int arr[n];
    
    for( int i = 0 ; i < n ; i ++ ){
        cin>>arr[i];
    }
    cout<<"your array is : ";
    for( int i = 0 ; i < n ; i ++ ){

        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    cout<<"after dutch flaging : ";

    counting(arr , n);

    return 0;
}
