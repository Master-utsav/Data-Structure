#include<iostream>
#include<string>

using namespace std;


int summofthtreeNum( int a , int b , int c ){

    return a + b + c;
}

int main(){
    
    int a , b , c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Sum is : "<<summofthtreeNum(a , b , c );
    return 0;
}