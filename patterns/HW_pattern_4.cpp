#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;

    int num = n / 2;

    for( int row = 0 ; row < num ; row ++ ){

        for( int col = 0 ; col < row + 1 ; col ++ ){

            cout<<"* ";
        }

        cout<<endl;
    }

     for( int row = 0 ; row < num ; row ++ ){

        for( int col = 0 ; col < num - row   ; col ++ ){

            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}