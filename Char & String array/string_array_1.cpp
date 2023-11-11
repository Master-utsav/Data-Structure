#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

string removeduplicates(string s){

    string temp = "";
    int index = 0;

    while(index < s.length()){

        if(temp.length() > 0 && temp[temp.length() - 1] == s[index]){
          
          temp.pop_back();
        }
        else{
            temp.push_back(s[index]);
        }

        index++;
    }
   
    return temp;
}

int main(){

    string name;
    getline(cin , name);
    
    cout<<"after removing duplicates : "<<removeduplicates(name);

    return 0;
}