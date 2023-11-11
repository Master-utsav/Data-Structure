#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

void Sortcolors(vector<int>v){

    int left = 0 ;
    int right = v.size() - 1  ;

    for( int i = 0 ; i < v.size() ; i++ ){

        if(v[i] == 0) {
           
           v[left] = v[i];
           cout<<v[left]<<"  ";
           left++;
          
        }

        else if(v[i] == 2){

            v[right] = v[i];
            cout<<v[right]<<"  ";
            right--;

        }

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
    
    cout<<"After sorting an array looks like : ";

    Sortcolors(v);


    return 0;
}