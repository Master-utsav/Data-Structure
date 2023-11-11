#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void factorial( int n ){

    int product = 1;

    for( int i = n ; i > 0 ; i-- ){

        product = product*i;
    }

    cout<<" factorial of number: "<<n<<" is : "<<product;
}

int main(){
    
    int num; 
    cout<<" enetr the number : ";
    cin>>num;

    factorial(num);

    return 0;
}