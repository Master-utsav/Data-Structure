#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    
    int n;
    cout<<" enter the number of rows: ";
    cin>> n;

    cout<<endl;

    int num = n / 2;
    
        // upper part
        for(int row = 0 ; row < num ; row ++ ){
         
          // first normal numeric pyramid
        for(int col = 0 ; col < row+1 ; col ++ ){

            if(col == 0 ){
                cout<<"* ";
            }
            else{

            cout<<col<<" ";
            }
        }
         
         //side reverse triangle 
        for(int col = 0 ; col < row  ; col ++ ){

            if(col == row -1 ){
                cout<<"* ";
            }
            else{
                cout<<row - col - 1<<" ";
            }
    
    }

         cout<<endl;
    }
        // lower part 
        for(int row = 0 ; row < num-1  ; row ++ ){

        // first normal numeric pyramid
        for(int col = 0 ; col < num - row-1 ; col ++ ){

            if(col == 0 ){
                cout<<"* ";
            }
            else{

            cout<<col <<" ";
            }
        }
        
        //side reverse triangle 
        for(int col = 0 ; col < num - row - 2  ; col ++ ){

            if(col == num - row -3  ){
                cout<<"* ";
            }
            else{
                cout<<num - row - 3<<" ";
            }
    
    }

          cout<<endl;
    }

    cout<<endl;
    
    return 0;
}