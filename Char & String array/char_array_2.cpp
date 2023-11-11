#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

void LowertoUpper(char ch[100]){
    
    int index = 0;
    while(ch[index] != '\0'){
       
       if(ch[index] >= 'a'&& ch[index] <= 'z'){
           ch[index] = ch[index] - 'a' + 'A' ;
       }
       index++;
    }
}

int main(){
    
    char ch[100];

    cin.getline(ch , 100);

    cout<<"before converting : "<<ch<<endl;

    LowertoUpper(ch);

    cout<<"after converting : "<<ch;


    return 0;
}