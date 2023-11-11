#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num ; 
    cout<<"enetr the number of rows: ";
    cin>>num ;

    for( int row = 0 ; row < num ; row ++ ){


        for( int col = 0 ; col < num - row -1 ; col ++ ){

            cout<<"  ";

        }

        for( int col = 0 ; col < row + 1 ; col ++ ){

            cout<<row + col + 1<<" " ;
        }

        for( int col = row -1 ; col >= 0  ; col -- ){

            cout<<col + row + 1<<" ";
        }

        cout<<endl;
    }
    return 0;
}