#include<bits/stdc++.h>
#include<stack>

using namespace std;


void solve(stack<int> &st , int &position , int &ans){

     if(position == 1){
        ans = st.top();
        return;
     }

    position --;
    int temp = st.top();
    st.pop();

    solve(st , position , ans);

    st.push(temp);
}

int MidOfStack(stack<int> &st){
     
     int size = st.size();
     int position = 0 ;
     int ans = -1;

     if(st.empty()){
        return -1;
     }
    else{
        if(size & 1){
            position = size/2 + 1;
        }
        else {
            position = size/2 ;
        }
    }

    solve(st , position , ans);
    return ans;
    
};

int main(){
    
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"middle is : "<<MidOfStack(st);

    return 0;
}