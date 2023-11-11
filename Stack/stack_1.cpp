#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string name = "UTSAV";
    stack<char> st;

    for(int i = 0 ; i < name.length() ; i++){

            char ch = name[i];
            st.push(ch);

    }

    while(!st.empty()){

        cout<<st.top();
        st.pop();

    }
    cout<<endl;

    return 0;
}