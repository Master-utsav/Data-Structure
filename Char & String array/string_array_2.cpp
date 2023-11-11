#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

string Removestring(string s , string part){

    while(s.find(part) != string::npos){
        s.erase(s.find(part) , part.length());
    }

    return s;
}

int main(){
    
    string name;
    getline(cin , name);

    string part;
    getline(cin , part);

    cout<<"after delelting a ' " << part << " ' part from the string : "<<Removestring(name, part);

   
    return 0;
}