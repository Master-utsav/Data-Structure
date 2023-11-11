#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enetr the number of rows: ";
    cin>>num;

    for(int row = 0 ; row < num ; row++ ){
         
         //spaces
        for(int col = 0 ; col <= num-row-1 ; col++ ){

            cout<<" ";
        }

        //stars
        for(int col = 0 ; col <= row-1 ; col++ ){

            cout<<"* ";
        }

        cout<<endl;

    }
    return 0;
}