#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    
    int num ; 
    cout<<"enter the number : ";
    cin>>num;

    int bit;
    int count = 0 ;
    float binary = 0;
    int i = 0;

    while(num > 0){

        bit = num%2;
        if(bit == 1){
          count++;
        }

        num = num/2;
        binary = bit*pow(10 , i ) + binary;
        i++;

    }

    cout<<"Binary representation is : "<<binary<<endl;
    cout<<" there are "<<count<<" of set bit";

    return 0;
}