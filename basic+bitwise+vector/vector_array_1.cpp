#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    
    vector<int>v;
    while(1){
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"capacity : "<<v.capacity()<<" and size : "<<v.size()<<endl;
    }
    return 0;
}