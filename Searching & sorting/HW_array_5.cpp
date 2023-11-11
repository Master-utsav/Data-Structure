#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

float AvgSubarray(vector<int>v , int k){
    
    float avg = -1.0;
    float sum = 0.0 ;

    if(k < v.size()){

    for( int i = 1 ; i <= k ; i++ ){

        sum = sum + v[i];

    }

    avg = sum/k;

    return avg;
    }

}
void Printarray(vector<int>arr){

    for( int i = 0 ; i < arr.size() ; i++ ){
        cout<<arr[i]<<"  ";
    }

}

int main(){
    vector<int>v;
    int n;
    cout<<"enetr the index of an array : ";
    cin>>n;

    for( int i = 0 ; i < n ; i ++ ){

        int d;
        cin>>d;
        v.push_back(d);

    }
    cout<<"Your array is : ";
    Printarray(v);

    cout<<endl;

    int k;
    cout<<"enter the length of the subarray ( length start from 1 and goes to "<<v.size() -1 <<" ) : ";
    cin>>k;
    
    float ans = AvgSubarray(v , k);
    if( ans == -1.0 ){
        cout<<"value of k exceedes the actual limit of array";
    }
    else{
       cout<<"Maximum average subarray of the given length is : "<<ans;
    }
    return 0;

}