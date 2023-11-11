#include<iostream>
#include<string>

using namespace std;



int main(){

    int row_num;
    cout<<"enetr the number of rows: ";
    cin>>row_num;

    int clm_num;
    cout<<"enetr the number of coloums: ";
    cin>>clm_num;

    for(int i = 0 ; i < row_num ; i++ ){

        for(int j = 0 ; j < clm_num ; j++){

            cout<<"* ";

        }

        cout<<endl;
    }

    return 0;
}