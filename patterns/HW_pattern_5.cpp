#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num; 
    int i = 1;
    cout<<"enetr the number of rows: ";
    cin>>num;
    
    for(int row = 0  ; row < num ; row ++ ){
        
        if( i < 10){
           for( int col = 0 ; col < row + 1 ; col ++ ){
           cout<<i++<<"  ";
        } 
        }
        else{
        
        for( int col = 0 ; col < row + 1 ; col ++ ){
            cout<<i++<<" ";
        }
        }

        cout<<endl;
    }
    return 0;
    
}