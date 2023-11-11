#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool checkpalindrome(string s , int i , int j){
    
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }

    return true;
}

bool Palindrome(string s){
    int i = 0;
    int j = s.length() - 1;

    while( i < j ){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{

            bool ans1 = checkpalindrome(s , i+1 , j);
            bool ans2 = checkpalindrome(s , i , j-1);

            return ans1 || ans2;
        }
 
    }

    return true;

}

int main(){
    string name;
    getline(cin , name);

    bool isanswer = Palindrome(name);

    if(isanswer){
        cout<<"user enter the valid palindorme";
    }
    else{
        cout<<"string is not a valid palindrome";
    }

    return 0;
}