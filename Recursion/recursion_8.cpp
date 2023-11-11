#include<bits/stdc++.h>

using namespace std;

void MININUMBER(int *arr , int size , int index , int &mini){
     
    

     if(index >= size){
        return;
     }
    
    mini = min(mini , arr[index]);
    MININUMBER(arr , size , index+1 , mini);

}

int main(){
     int arr[] = {90,40,15,16};
    int size = 4;
    int index = 0;
    int mini = INT_MAX;

    MININUMBER(arr , size , index , mini);

    cout<<mini;
    return 0;
}