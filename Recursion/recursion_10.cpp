#include<bits/stdc++.h>

using namespace std;

void MAXNUMBER( int *arr , int size , int index , int &maxi){
    

    if(index >= size){
        return;
    }

    maxi = max(maxi , arr[index]);

    MAXNUMBER(arr , size , index+1 , maxi);

}

int main(){
    
    int arr[] = {12,45,24,14,664,78};
    int size = 6;
    int index = 0;
    int maxi = INT_MIN;

    MAXNUMBER(arr , size , index , maxi);

    cout<<maxi;

    return 0;
}