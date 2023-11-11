#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"eneter the nuumber of rows: ";
    cin>> num ;

    for(int row = 0 ; row < num ; row ++){

        for(int col = 0 ; col < num - row - 1 ; col ++ ){

            cout<<" ";

        }

        for(int col = 0 ; col < row + 1 ; col ++ ){
                cout<<col+1;
        }

        for( int col = row -1 ; col >=0 ; col -- ){
            cout<<col+1;
        }

        cout<<endl;

    }

    return 0;
}