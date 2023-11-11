#include<bits/stdc++.h>

using namespace std;

void addElemenent_SortedStack(stack<int> &st , int &element){
    if(st.empty() || element > st.top()){  // for ascending
         st.push(element);
         return;
    }

    int temp = st.top();
    st.pop();

    addElemenent_SortedStack(st , element);

    st.push(temp);
}

int main(){
     
     stack<int> st;

     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
     st.push(50);

     int element;
     cout<<"element : ";
     cin>>element;
    

     addElemenent_SortedStack(st , element);

     while(!st.empty()){

        cout<<st.top()<<endl;
        st.pop();
     }
    return 0;
}