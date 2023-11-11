#include<bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &st , int &element){

    if(st.empty()){
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBottom(st , element);

    st.push(temp);

}
void ReverseStack(stack<int> &st){

    if(st.empty()){
        return;
    }
    
    // storing the elemnet which will pop now
    int temp = st.top();
    st.pop();
    
    // recursion
    ReverseStack(st);

    // backtracking
    insertAtBottom(st , temp);

}

int main(){
    
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"Before reversing the stack : ";

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"-After reversing the stack : ";

    ReverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}