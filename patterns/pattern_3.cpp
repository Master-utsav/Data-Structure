#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num; 
    cout<<"enter the number of rows: ";
    cin>>num;

    char ch;
    ch = num + 'A' + 1;
    cout<<ch;


    for( int row = 0 ; row < num ; row++ ){
        
        for( int col = 0 ; col <= row ; col ++ ){
            char ch = col + 1 + 'A' -1;
            cout<<ch<<" ";
        }

        for( int col = row-1 ; col >=0  ; col-- ){
            char ch = col + 'A'  ;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}