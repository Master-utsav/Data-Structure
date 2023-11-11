#include<iostream>
#include<string>

using namespace std;

void printNum( int n ){

    for(int i = 1 ; i <= n ; i++ ){

        cout<<i<<endl;
    }
}

int main(){
   
   printNum(10);

    return 0;
}