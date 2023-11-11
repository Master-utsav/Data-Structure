#include<iostream>
#include<string>

using namespace std;

float km_to_miles(float distance){

    return distance*0.621371;
}

int main(){
     
     float distance;
     cout<<" enter the distance in Km : ";
     cin>>distance;

     cout<<" "<<distance<<" KM = "<<km_to_miles(distance)<<" miles ";
    
    return 0;
}