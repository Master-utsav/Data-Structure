#include<bits/stdc++.h>

using namespace std;

class Animal{
    
    int x;
    int arr;

    char ch;
    
};

int main(){
    // cout<<sizeof(Animal);  // output == 1

    // cout<<sizeof(Animal); // for int x,arr output == 8

    cout<<sizeof(Animal); // for intx,arr & ch output == 12 // concept of padding and greeding
    return 0;
}