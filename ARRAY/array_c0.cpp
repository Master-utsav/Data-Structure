#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){
    
    int arr[10];

    for( int i = 0 ; i < 10 ; i++){
        cout<<"enert the value in index : "<<i<<"\t";
        cin>>arr[i];

    }

    for(int i = 0 ; i < 10 ; i++ ){
        
        cout<<"value after multiply 2 in the array of index "<<i<<" is "<<2*arr[i]<<endl;
    }
    return 0;
}