#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){

    int num_min , num_max;
    cout<<"enter the number from where you start counting : ";
    cin>>num_min;
    cout<<"enter the number where you stop counting : ";
    cin>>num_max;

    

    while(num_max > num_min ){
      int i = 2 ;  
     while(num_min > i){

        if(num_min % i != 0){

           if(num_min == i - 1 ){
              cout<<num_min<<endl;
           }
      
        }
        i++;
     }
        num_min++;
    }

    return 0;
}