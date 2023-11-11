#include<bits/stdc++.h>

using namespace std;



int main(){
    int  a = 5;
    
    cout<<a<<endl;
    cout<<&a<<endl;

    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;

    char ch ='k';
    char *cptr = &ch;

    long elaechi = 8;
    long *lptr = &elaechi;
    
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(cptr)<<endl;
    cout<<sizeof(lptr)<<endl;
    
 


    return 0;
}