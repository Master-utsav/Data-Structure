#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enert the number of rows: ";
    cin>>num;
    
     

    for(int i = 0; i< num ; i++){

        
        for(int j = i ; j < num ; j++){
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}