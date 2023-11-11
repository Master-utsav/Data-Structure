#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void Area_of_circle( float r ){
    
     float pi = 3.14159265359l;

    cout<<"Area of the circle whose radius : "<<r<<" is : "<<(pi*(pow( r, 2 )));
}
  
int main(){
    
    float radius;
    cout<<"enter the radius of the circle : ";
    cin>>radius;

    Area_of_circle(radius);

    return 0;
}