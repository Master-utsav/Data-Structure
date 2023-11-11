#include<iostream>
#include<string>

using namespace std;

float farheniet_to_celcius( float tempF ){
     
     return ((5/9)*(tempF - 32));
}

int main(){

    float temptF;
    cout<<"enter the temperature in degree farheniet: ";
    cin>>temptF;

    cout<<" "<<temptF<<" farheniet  "<<" = "<<farheniet_to_celcius(temptF)<<" celcius ";

    return 0;
}