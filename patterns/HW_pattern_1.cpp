#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enter the number of rows: ";
    cin>>num;

    for(int row = 0 ; row < num ; row ++ ){

        for(int col = 0 ; col < num - row ; col ++ ){
            
            if( row == 0){
                cout<<col+1<<" ";
            }
            else if(col==0){
                cout<<row+1;
            }
            else if(col == num - row - 1 ){
                cout<<" "<<num;
            }
            else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }
    return 0;
}