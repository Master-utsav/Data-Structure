#include<iostream>
#include<string>

using namespace std;

int Sum_1_to_N( int n ){

    int sum = 0 ;

    for( int i = 2 ; i<= n ; i = i+2 ){

        sum = sum + i ;
    }

    return sum;
}

int main(){
    
    cout<<" sum is : "<<Sum_1_to_N(10);
    return 0;

}