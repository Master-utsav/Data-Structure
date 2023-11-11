#include<iostream>
#include<string>

using namespace std;



int main(){
     
    int a = 5 ; 
    int b = 10 ; 

    cout<< ( a&b )<< endl;
    cout<< ( a|b )<< endl;
    cout<< ( a^b )<< endl;
   

    int num = 5;

    cout<< ~num <<endl;
    cout<< ~(num) <<endl;
    cout<< (~num) <<endl;

     return 0;
}