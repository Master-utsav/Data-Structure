#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int decimaltobinary( int n ){

    float binary = 0;
    int bit ;
    int i = 0 ;

    while(n>0){

        bit = n%2;
        binary = bit*pow(10, i) + binary;
        i++;
        n = n/2;
        
    }
       return binary;
}

int main(){
    
    int num; 
    cout<<"enetr the number: ";
    cin>>num;

    cout<<decimaltobinary(num);
    return 0;
}