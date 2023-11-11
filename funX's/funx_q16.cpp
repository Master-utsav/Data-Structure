#include<iostream>
#include<string>

using namespace std;

void Even_Odd( int n ){
      
      if( n & 1 == 1 ){
        cout<<"number is odd";
      }
      else{
        cout<<"number is even";
      }
}

int main(){
    
    int num;
    cout<<"enter the number: ";
    cin>>num;
    
    Even_Odd(num);
    return 0;
}