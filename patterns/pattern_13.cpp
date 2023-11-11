#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enter the number of rows: ";
    cin>>num;
    
    for(int row = 0 ; row < num ; row++ ){

        for(int col = 0 ; col < num-row-1 ; col++ ){
              
                 cout<<" ";
            }
        for(int col = 0 ; col < row+1 ; col++ ){
            if((col == 0) || (col == row )){
            cout<<"* ";
            }
            else{           
                 cout<<"  ";
            }

    }
        cout<<endl;
      
    }
    return 0;
}