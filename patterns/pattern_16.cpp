#include<iostream>
#include<string>

using namespace std;



int main(){

    int num;
    cout<<"eneter the number of rows: ";
    cin>>num;

    for(int row = 0 ; row < num ; row ++ ){

        for(int col = 0 ; col < row+1 ; col ++ ){

            if(col == 0 || col == row ){
                cout<<" "<<col+1;
            }
            else if(row == num -1){
                cout<<" "<<col+1;
            }
            else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }
    return 0;
}