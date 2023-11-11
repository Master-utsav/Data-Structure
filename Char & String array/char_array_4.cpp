#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int getlength(char ch[100]){

    int index = 0;
    while(ch[index] != '\0'){
        index++;
    }

    return index;
}


bool checkPlaindrome(char ch[] , int length){
    int i = 0;
    int j = length - 1;

    while(i <= j){
        
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }

    return true;
 
}


int main(){

    char ch[100];

    cin.getline(ch , 100);
   
    cout<<ch<<endl;

    int length = getlength(ch);

    bool answer = checkPlaindrome(ch , length);
    
    if(answer){
        cout<<"string is palindrome";
    }
    else{
        cout<<"is is not a plaindrome";
    }

    return 0;
}