#include<bits/stdc++.h>

//Remove redundant Brackets

using namespace std;

bool CheckRedudndantBrack(string s){
    stack<char> st;

    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i];

        if(ch == '(' || ch == '/' || ch == '*' || ch == '-' || ch == '+' || ch == '%'){
            st.push(ch);
        }
       
        else if(ch == ')'){
            
            int countOperator = 0;
            while(!st.empty() && st.top() != '('){
                char temp = st.top();
                if(temp == '/' || temp == '*' || temp == '-' || temp == '+' || temp == '%'){
                    countOperator++;
                }

                st.pop();
            }

            st.pop();
            if(countOperator == 0){
                return true;
            }
        }

    }

    return false;
}

int main(){

    string s;
    cout<<"enter and string : ";
    cin>>s;

    bool ans = CheckRedudndantBrack(s);

    if(ans){
        cout<<"Redundant bracket is present"<<endl;
    }
    else{
        cout<<"Redundant bracket is not present"<<endl;
    }
    
    return 0;
}