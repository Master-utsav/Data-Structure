#include<bits/stdc++.h>

//Valid parenthesis

using namespace std;

bool validParanthesis(string s){
    stack<char> st;

    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i];

        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }

        else{
            if(!st.empty()){

                if(ch == ')' && st.top() == '('){
                    st.pop();
                }
                else if(ch == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(ch == ']' && st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }

    if(st.size() == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string s;
    cout<<"enter and string : ";
    cin>>s;

    bool ans = validParanthesis(s);

    if(ans){
        cout<<s<<" is a valid string"<<endl;
    }
    else{
        cout<<s<<" is an Invalid string"<<endl;
    }

    return 0;
}