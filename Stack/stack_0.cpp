#include<bits/stdc++.h>
#include"stack.h"

using namespace std;

int main(){
    
    Mystack obj(8);

    obj.push(20);
    obj.push(15);
    obj.push(10);
    obj.push(5);
    obj.push(5);
    obj.push(5);
    obj.push(5);
    obj.push(2);
    obj.push(1);

    obj.printStack();
    cout<<endl;
    cout<<"size of stack is : "<<obj.getSize()<<endl;
    cout<<endl;

    obj.pop();
    obj.printStack();
    cout<<endl;

    bool ans = obj.isEmpty();

    if(ans){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }
    cout<<endl;

    cout<<"size of stack is : "<<obj.getSize()<<endl;

    return 0;
}