#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

int peakmountain(vector<int>arr){

    int s = 0 ;
    int e = arr.size() - 1;
    int mid = s + ( e -s ) / 2;
    
    while ( s < e ){

        if(arr[mid] < arr[mid + 1]){

            s = mid + 1;
            
        }
        else{

            e = mid;
        }

        mid = s + ( e -s ) / 2;
    }
    return arr[e];
}

int main(){
    
    vector<int>v;
    int n;
    cout<<"enter the number of index : ";
    cin>>n;
 
    cout<<"enter the values : "<<endl;
    for( int i = 0 ; i < n ; i ++ ){
        int d;
        cin>>d;
        v.push_back(d);
    }

    int answer = peakmountain(v);

    cout<<"peak number in a mountain array is : "<<answer;


    return 0;
}