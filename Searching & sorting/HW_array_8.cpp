#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

// duplicate number but ek bar main 2 se jayda koi bhi element nahi aa skta 

void bubble_sorting(vector<int> &v){

    for( int i = 0 ; i < v.size()  ; i ++ ){

        for(int j = 0 ; j < v.size() - i - 1 ; j ++ ){
            if(v[j] > v[j+1]){

             swap(v[j] , v[j+1]);

            }
        }
      
    }
}

int DuplicateNumber(vector<int>v){
     
     int s = 0; 
     int e = v.size() - 1;
     int mid = s + ( e - s ) / 2;
   

     while ( s <= e ){

        if( s == e ){
            return s;
        }
        if( mid & 1 ){

            if(mid - 1 <= 0 && v[mid] == v[mid-1]){
                 s = mid + 1;
            }
            else{
                e = mid - 1 ;
            }
        }
        else{

            if(mid + 1 < v.size() && v[mid] == v[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
       
       mid = s + ( e - s ) / 2;

     }

     return -1;

}

void printarray(vector<int> v){
     
     for( int i = 0 ; i < v.size() ; i++ ){
        
          cout<<v[i]<<"  ";
     }
}

int main(){
    vector<int>arr;

    int n;
    cout<<"enetr the indexes of an array : ";
    cin>>n;
    
    cout<<"enter the vlaues for an array : "<<endl;

    for(int i = 0 ; i < n; i++ ){
        int d;
        cin>>d;
        arr.push_back(d);
    }
    
    cout<<"your array is : ";
    printarray(arr);
    cout<<endl;

    cout<<"after sorting the elements of an array : ";
    bubble_sorting(arr);
   
    printarray(arr);
    cout<<endl;
    
   
   if(DuplicateNumber(arr) == -1 ){

   cout<<"no dipliacte num found ";
   }
   else{

   cout<<"duplicate number is : "<<arr[DuplicateNumber(arr)];

   }
    return 0;
}