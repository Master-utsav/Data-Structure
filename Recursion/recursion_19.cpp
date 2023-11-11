#include<bits/stdc++.h>

using namespace std;

void Subsequence(string str , string output , int index){

    if(index >= str.length()){
        cout<<"-> "<<output<<endl;
        return;
    }
    
    // if we include first then 
    output.push_back(str[index]);
    Subsequence(str , output , index+1);

    //we have to pop that character also 
    output.pop_back();
    Subsequence(str , output , index+1);



    // //exclude
    // Subsequence(str , output , index+1);s

    // //include
    // output.push_back(str[index]);
    // Subsequence(str , output , index+1);

}

int main(){
    string str = "abc";
    int index = 0;
    string output;
    
    Subsequence(str , output , index );
    return 0;
}