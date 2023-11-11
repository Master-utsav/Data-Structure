#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enter the number of rows: ";
    cin>> num; 

    for( int row = 1 ; row <= num ; row ++ ){

        for(int col = 1 ; col < num - row + 1 ; col ++ ){

            cout<<" ";
        }
         
        int c = 1;
        for(int col = 1 ; col <= row  ; col ++ ){
           
            cout<<c<<" ";
            c = c*(row - col)/col;

        }

        cout<<endl;
    }

    return 0;
}