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

int main(){
    char ch[100];
    cin.getline(ch, 100);

    cout<<ch<<endl;

    cout<<"the length of the string is : "<<getlength(ch);

    return 0;
}