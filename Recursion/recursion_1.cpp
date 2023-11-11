#include<bits/stdc++.h>

using namespace std;

void Countprint(int num){
      
      if(num==1){
        cout<<num<<"  ";
        return;
      }
      Countprint(num-1);
      cout<<num<<"  ";
       
        
} 

int main(){
    Countprint(100);
    return 0;
}