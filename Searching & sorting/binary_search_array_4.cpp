#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

int missingelemnet(vector<int>arr){
     
     int s = 0 ;
     int e = arr.size();
     int mid = s + (e-s)/2;
     int ans = -1;

     while(s <= e){ 

        int diff = arr[mid] - mid;

        if(diff == 1){
            s = mid + 1;
        }
        else {

            ans = mid;
            e = mid - 1;
        }
        
        mid = s + ( e - s )/2;

     }

     return ans + 1;
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

    int answer = missingelemnet(v);
    cout<<"missing element in a given sorted array is : "<<answer;


    return 0;
}