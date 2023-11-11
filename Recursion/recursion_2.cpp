#include<bits/stdc++.h>

using namespace std;

int PowerOfTwo(int n){
 
    if(n==0){
        return 1;
    }
    else{

        int ans = 2* PowerOfTwo(n-1);
        return ans;
    }

}

int main(){
    
    cout<<PowerOfTwo(10);
    return 0;
}