#include<iostream>
#include<string>

using namespace std;



int main(){
    int range_max;
    int range_min;


    cout<<"enetr the min range: ";
    cin>>range_min;

    cout<<"enetr the max range: ";
    cin>>range_max;

 

    if(0<range_min){
        
        for(int i = range_min+1 ; i < range_max ; i=i+2){

            cout<<i<<endl;
        }
    }
    else{
        cout<<"you entered out of range number";
    }



    return 0;
}