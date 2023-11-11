#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int binary_To_decimal(int n){
    
    int digit;
    float number;
    int i = 0;
    int fraction_num;
    int count = 1;

    while(n>0){
        n = n/10;
        count ++;
    }

    while(n>0){

        fraction_num = n/(pow(10 , count -1 ));
        count--;
        digit = fraction_num*2;
        number = digit*pow(2 , i ) + number;
        i++;
        n /= 10; 
    }
    return number;
}

int main(){
    
    int num;
    cout<<"enetr the number: ";
    cin>>num;

    cout<<binary_To_decimal(num);
    return 0;
}