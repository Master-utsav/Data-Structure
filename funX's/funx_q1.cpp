#include<iostream>
#include<string>

using namespace std;

int maxNum ( int a , int b , int c ){

    int ans = max( a , b );
    int finalans = max ( ans , c );

    return finalans;
}

int main(){

    cout<<"Max is : "<<maxNum( 5, 8, 10);

    return 0;
}