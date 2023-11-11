#include<iostream>
#include<string>

using namespace std;

bool PrimeNum( int n){

    for( int i = 2 ; i< n ; i++ ){

         if( n % i == 0){

            return false;
         }
     
    }

    return true;
}

int main(){

   bool prime = PrimeNum(90);

   if(prime){

    cout<<"number is prime";
   }

   else{

    cout<<"number is non prime";
   }
    return 0;
}