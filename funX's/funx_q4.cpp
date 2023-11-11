#include<iostream>
#include<string>

using namespace std;

int EvenOdd ( int n ){

    if ( n % 2 == 0 ){

        cout<<" number is even ";

    }
    else{

        cout<<" number is odd ";
    }
}

int main(){


    EvenOdd(10);
    return 0;
}