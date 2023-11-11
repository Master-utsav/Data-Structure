#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;

// search target element by using binary search with pivot element
int pivotIndex(vector<int>&v){

    int s = 0 ;
    int e = v.size() - 1;
    int mid = s + ( e-s )/2;
    int ans = -1;

    while(s <= e){
      
        if(mid - 1 >= 0 && v[mid] < v[mid-1]){
            
           return  mid - 1;
        }

        else if(mid + 1 < v.size() && v[mid] > v[mid + 1]){
           
            return mid;
        }

        else if(v[s] > v[mid]){

            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }

    return ans;
}

int targetsearch(vector<int>v , int p , int target){

    if(target == v[p]){
        return p;
    }

    else if(target<v[p] && target>=v[0]){
        cout<<"search in first part";
        int s = 0;
        int e = p;
        int mid = s + (e-s)/2;
        while(s<=e){
            
           
            if(v[mid] == target){
                return mid;
            }
            else if( v[mid] < target){
                s = mid + 1;
            }
               
            else{
                
                 e = mid - 1;
            }

            mid = s + (e-s)/2;

        }

        return -1;

    }

    else if(target<v[p] && target>=v[v.size() -1]){

        cout<<"search in 2nd part";
        int s = p+1;
        int e = v.size() -1;
        int mid = s + (e-s)/2;
        while(s<=e){
            
           
            if(v[mid] == target){
                return mid;
            }
            else if( v[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }

            mid = s + (e-s)/2;

        }

        return -1;

        }
    }

void printarray(vector<int>v){

    for ( int i = 0 ; i < v.size() ; i ++ ){
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
    
    int target;
    cout<<"enter the target element : ";
    cin>>target;

    int pivot = pivotIndex(arr);
    cout<<"pivot is : "<<pivot<<endl;

    int ans = targetsearch(arr , pivot , target);
    
    if(ans == -1){
        cout<<"target not found";
    }
    else{
       cout<<"target found at indx : "<<ans;
    }

    return 0;
}