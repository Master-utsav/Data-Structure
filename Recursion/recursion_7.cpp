#include<bits/stdc++.h>

using namespace std;

bool SearchTarget( int *arr , int size , int index , int &target){

    if(index >= size){
        return false;
    }

    if(target == arr[index]){
        return true;
    }

    SearchTarget(arr , size , index+1 , target);

}

int main(){
    
    int arr[] = {1,2,3,4,5,6,78};
    int target = 6;
    int size = 7;
    int index = 0;

    int ans = SearchTarget(arr , size , index , target );
    if(ans){
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }
    return 0;
}