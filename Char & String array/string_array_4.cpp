#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int Count(string s , int i , int j ){
    
    int count = 0;
    while(i >= 0 && j < s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;

    }

    return count;
}

int CountPlaindromes(string s){

    int totalCount = 0;

    for(int i = 0 ; i < s.length() ; i++ ){

        int j = i;
        int OddCount = Count(s , i , j);
        

        j = i+1;
        int EvenCount = Count(s , i , j);
        

        totalCount = totalCount + OddCount + EvenCount;

    }

    return totalCount;
}

int main(){
    
    string name;
    getline(cin , name);

    cout<<"there are total "<<CountPlaindromes(name)<<" palindromes in the string : "<<name;


    return 0;
}