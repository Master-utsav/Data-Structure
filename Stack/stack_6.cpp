#include<bits/stdc++.h>

using namespace std;

void insertSorted(stack<int> &st , int &element , char &ch){
    
    if(ch == 'A' || ch == 'a'){

        if(st.empty() || element < st.top()){
            st.push(element);
            return;
        }

    }
    else {

        if(st.empty() || element > st.top()){
            st.push(element);
            return;
        }

    }

    int temp = st.top();
    st.pop();

    insertSorted(st , element , ch);

    st.push(temp);

}

void SortStack(stack<int> &st ,  char &ch){
    
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();

    SortStack(st , ch);

    insertSorted(st , temp , ch);
}

void printStack(stack<int> st){
     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;
}

int main(){
    
    stack<int> st;

    char ch;
    cout<<"Type a or A for ascending sorted : ";
    cin>>ch;

    st.push(10);
    st.push(5);
    st.push(3);
    st.push(15);
    st.push(1);
    st.push(19);

    cout<<"Before sorting : ";
    printStack(st);
    
    cout<<"-After sorting : ";
    SortStack(st , ch);
    printStack(st);

    return 0;
}