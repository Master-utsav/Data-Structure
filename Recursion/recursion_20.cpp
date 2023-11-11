#include<bits/stdc++.h>

using namespace std;

int CutintoSegments(int n , int x , int y , int z){

    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }

    int out1 = 1 + CutintoSegments(n-x , x , y , z);
    int out2 = 1 + CutintoSegments(n-y , x , y , z);
    int out3 = 1 + CutintoSegments(n-z , x , y , z);

    int finalans = max(out1 , max(out2 , out3));

    return finalans;
}

int main(){
    
    int n = 4;
    int x = 2;
    int y = 1;
    int z = 1;

    cout<<CutintoSegments(n , x , y , z);

    return 0;
}