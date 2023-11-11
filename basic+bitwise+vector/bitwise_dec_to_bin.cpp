#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// float powfunx( int y , int x ){
    
//     float powerbit = pow(10 , x );

//     return powerbit;
// }
int decimaltobinary(int n){
    
    float binaryno = 0;
    int i = 0;
    while(n > 0){

        int bit = (n & 1);
        binaryno = bit* pow(10 , i ) + (binaryno);
        i++;
        n =  n >> 1 ;
 
    }

    return binaryno;
 
}
int main(){
    
    int num;
    cin>>num;

    int no = decimaltobinary(num);
    cout<<no;

    return 0;
}