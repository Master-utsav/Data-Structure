#include<iostream>
#include<string>

using namespace std;



int main(){

    int num ; 
    cout<<" emter the number of rows: ";
    cin>> num ;
    
  
    int i = 1;
    for ( int row  = 0 ; row < num ; row ++ ){
        
      
        for( int col = 0 ; col < 2*row + 1 ; col ++ ){

            if( col%2!=0){

                cout<<"* ";
            }
            else{
                cout<<i++<<" ";
             
            }

        }

        cout<<endl;
    }
    
    // i = i - 1;
    // for ( int row = 0 ; row < num +1  ; row ++ ){
        
    
    //     for( int col = num - 2*row + 1  ; col >=0  ; col -- ){

    //         if( col%2!=0){

    //             cout<<"* ";
    //         }
    //         else{

    //             cout<<i--<<" ";
               
    //         }ss

    //     }

    //     cout<<endl;
    // }
    return 0;
}