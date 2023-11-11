#include<iostream>
#include<string>

using namespace std;



int main(){
    
    // left shift operator *2^n
    int a = 5;
    int ans = (a << 1);
    cout<<ans<<endl;

    ans = (a << 3);
    cout<<ans<<endl;

    // left shift operator /2^n
    int n = 100;
    cout<<(n >> 1)<<endl;
    cout<<(n >> 4)<<endl;

    int neg = -100;
    cout<<(neg >> 2)<<endl;

    unsigned int negx = -100;
    cout<<(negx >> 2)<<endl;

    int dd = 100;
    cout<<(dd >> -1)<<endl;

    return 0;
}