#include<iostream>
#include<string>

using namespace std;

int main(){

    int n;
    cout<<"enetr the number of rows: ";
    cin>>n;
    
    int num = n / 2;
    // // uper part
    for(int row = 0 ; row < num ; row++ ){

        // inverted 1 
        for(int col = 0 ; col < num - row ; col ++ ){
            cout<<"* ";
        }
        // pyramid 
        for(int col = 0 ; col < 2*row + 1 ; col ++ ){
            cout<<"  ";
        }
        // inverted 2
        for(int col = 0 ; col < num - row ; col ++ ){
            cout<<"* ";
        }

        cout<<endl;
    }
    
    // lower part
    for(int row = 0 ; row < num ; row ++ ){

        // half py 1
        for(int col = 0 ; col < row + 1 ; col ++ ){
            cout<<"* ";
        }
        // inverted py 1
        for(int col = 0 ; col < ((2*num) - (2*row + 1))  ; col ++ ){
            cout<<"  ";
        }
        // half py 1
        for(int col = 0 ; col < row + 1 ; col ++ ){
            cout<<"* ";
        }

        cout<<endl;
    }
    
    return 0;
}