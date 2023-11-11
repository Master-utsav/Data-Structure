#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
#include<cmath>

using namespace std;


bool targetele(int arr[3][3] , int target){

    int s = 0 ;
    int col = 3;
    int e = 3*3 -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        int rowIndex = mid / col;
        int colindex = mid%col;
        int CurrentNum = arr[rowIndex][colindex];

        if(CurrentNum == target){
             return 1;
        }
        else if(CurrentNum < target ){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
        
    }
    return 0;

}


int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int target = 7;

    int ans = targetele(arr , target);

    if(ans == 0){
        cout<<"target not found";
    }
    else{
        cout<<"target found";
    }
  

    return 0;
}