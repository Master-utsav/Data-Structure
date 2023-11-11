#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enetr the number of rows: ";
    cin>>num;

    for(int i = 1 ; i <=num ; i = i+1){

        for( int j = 1 ; j <= i ; j++ ){

            cout<<j<<" ";
        }

        cout<<endl;
    }

    return 0;
}