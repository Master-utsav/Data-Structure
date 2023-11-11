#include<bits/stdc++.h>

using namespace std;

int x = 4; // global x variable

int main(){
    ::x = 50 ; // updatimg global x variable

    int x = 9;
    {
        cout<<x<<endl; // accesing nearest local variable x
        cout<<::x<<endl; // accesing global x 
    }
    {
        int x = 20;
        cout<<x<<endl; // accesing nearest local variable x
    }
    return 0;
}