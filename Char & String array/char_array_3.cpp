#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

void replace(char ch[100]){

    int index = 0;

    while(ch[index] != '\0'){

        if(ch[index] == '@'){
            ch[index] = ' ';
        }

        index++;
    }
}

int main(){
    
    char ch[100];
    cin.getline(ch , 100);

    cout<<ch<<endl;

    replace(ch);

    cout<<"after replacing : "<<ch;
    
    return 0;
}