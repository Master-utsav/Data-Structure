#include<bits/stdc++.h>

using namespace std;

// Abstraction w e already study that 

// exception handling 

void checklimit(int age){

    try{
        if(age>=24){
            cout<<"You are eligible to drink alcohal since your age is : "<<age;
        }
        else{
            throw(age);
        }
    }

    catch(int erroroccur){
        cout<<"You are not eligible to drink alcohal since you age is : "<<erroroccur;
    }
}


int main(){
    int age;
    cout<<"enter the age : ";
    cin>>age;

    checklimit(age);
    return 0;
}