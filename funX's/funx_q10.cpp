#include<iostream>
#include<string>

using namespace std;



int main(){
    
    int num;
    cout<<"enter the number : ";
    cin>>num;
    
    int count = 1;
    int digit;
    while(num > 0 ){

        digit = num%10;
        
        num = num/10;
        
        cout<<" "<<count<<" digit is : "<<digit<<endl;

        count++;
    }

    return 0;
}