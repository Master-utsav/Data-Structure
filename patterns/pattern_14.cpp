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

    for(int i = 1; i<=row_num ; i++ ){

        for(int j = 1; j<=clm_num; j++ ){
            if(i == 1 || i == row_num ){
                cout<<"* ";
            }
            else{
                if(j == 1 || j == clm_num){
                cout<<"* ";}

                else{
                    cout<<"  ";
                }
            }
        }

        cout<<endl;
    }
    return 0;
}