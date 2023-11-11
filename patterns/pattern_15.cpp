#include<iostream>
#include<string>

using namespace std;


int main(){

    int num; 
    cout<<"enter the number: ";
    cin>>num;


    for(int row = 0 ; row < num ; row++ ){

       
        
        for( int col = 0 ; col < row ; col++ ){
            cout<<" ";
            
        }

         for( int col = 0 ; col < num-row ; col++ ){
            cout<<"* ";

        }

        cout<<endl;
    }

    return 0;
}