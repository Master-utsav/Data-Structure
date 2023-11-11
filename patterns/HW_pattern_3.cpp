#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num_row, n_col;
    cout<<"enter the number of rows: ";
    cin>>num_row;
    cout<<"enter the number of coloumns: ";
    cin>>n_col;
    
    int num_col = n_col / 2;

    for(int row = 0 ; row < num_row ; row ++ ){

        for( int col = 0 ; col < num_col - row ; col ++ ){

            cout<<"* ";
        }

        for( int col = 0 ; col < 2*row +1 ; col ++){

            if(col%2 == 1){
                cout<<" * ";
            }
            else{
                cout<<row+1 ; 
            }
        }
        for( int col = 0 ; col < num_col - row ; col ++ ){

            cout<<" *";
        }

        cout<<endl;
    }
    

    return 0;
}