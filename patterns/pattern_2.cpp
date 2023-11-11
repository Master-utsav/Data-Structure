#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int n ; 
    cout<<"enetr the number of rows: ";
    cin>>n;

    int num = n/2;

    for(int row = 0 ; row < num ; row ++){

        for(int col = 0 ; col < 2*row + 1 ; col ++){

            if(col%2 == 1 ){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }

        cout<<endl;
    }
    
       num = num -1;
    for(int row = 0 ; row < num ; row ++ ){
        
        for( int col = 0 ; col < 2*(num - row ) - 1   ; col++ ){
             
             if(col%2 == 1 ){
                cout<<"*";
             }
             else{
                cout<<num - row ;
             }
        }

        cout<<endl;            
    }

    return 0;
}