#include<bits/stdc++.h>

using namespace std;

void solve(int *p){  // call by value copy passes
    p = p+1;
}

void solve2(int* &p){  // call by reference
    p = p + 1;
}

int main(){
    
    int a = 5;
    int *p = &a;

    cout<<" p : "<<p<<endl;
    cout<<" &p : "<<&p<<endl;
    cout<<" *p : "<<*p<<endl;

    solve(p);

    cout<<" p : "<<p<<endl;
    cout<<" &p : "<<&p<<endl;
    cout<<" *p : "<<*p<<endl;

    solve2(p);

    cout<<" p : "<<p<<endl;
    cout<<" &p : "<<&p<<endl;
    cout<<" *p : "<<*p<<endl;

    return 0;
}