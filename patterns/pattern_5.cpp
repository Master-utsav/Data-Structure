#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enetr the number of rows: ";
    cin>>num;

    for(int i = 0 ; i < num ; i = i+1){

        for( int j = 0 ; j <= i ; j++ ){

            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}