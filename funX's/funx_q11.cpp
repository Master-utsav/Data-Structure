#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){
    
    int num;
    cout<<"enetr the number of digits: ";
    cin>>num;

    int count = 1;
    int number;
    float ans = 0;

    while(count <= num){

        cout<<"digit: "<<count<<" number is : ";
        cin>>number;
        count++;

        ans = ans*10 + number;
    }
    cout<<"Your "<<(count-1)<<" digit number is : "<<ans;

    return 0;
}