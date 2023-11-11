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


void reversearray(char ch[] , int length){
    int i = 0;
    int j = length - 1;

    while(i <= j){
        swap(ch[i] , ch[j]);
        i++;
        j--;
    }
    
}

int main(){
    char ch[100];
    cin.getline(ch , 100);
    int length = getlength(ch);

    cout<<"before : "<<ch<<endl;
    
    reversearray(ch , length);
    cout<<"after : "<<ch;
    return 0;
}