#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

int pivotNumber(vector<int>v){

    int ans = -1;
    int left = 0 ;
    int right = v.size() - 1;
    int suml = 0;
    int sumR = 0;

    while(left < right ){
    
       suml = suml + v[left];
       sumR = sumR + v[right];

       if(suml == sumR){
          ans = left;
          return left;
        
       }
       left++;
       right--;
    }
    
    return ans;

}

int main(){
    vector<int>arr;
    int n;
    cout<<" enetr the index of an array : ";
    cin>>n;

    for( int i = 0 ; i < n ; i ++ ){
        int d;
        cin>>d;
        arr.push_back(d);
    }

    int answer = pivotNumber(arr);
    
    if( answer == -1){
        cout<<"pivot answer not found ";
    }
    else{
    cout<<"pivot index found at : "<<answer;
    }

    return 0;
}