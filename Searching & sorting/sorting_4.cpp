#include<bits/stdc++.h>

using namespace std;

void quicksort(int *arr , int start , int end){
    int pivot = end;
    int i = start -1;
    int j = start;

    if(start>=pivot){
        return;
    }

    while(j < pivot){
       if(arr[j] < arr[pivot]){
        i++;
        swap(arr[i] , arr[j]);
       }
       j++;
    }
    i++;
    swap(arr[i] , arr[pivot]);
    quicksort(arr , start , i-1);
    quicksort(arr , i+1 , end );

}

int main(){
    int arr[] = {2,56,13,13,53,6,1,0,3};
    int start = 0;
    int end = 8;

    cout<<"before sorting : ";
    for(int i = 0 ; i <= end ; i++){
        cout<<arr[i]<<"  ";
    }

    cout<<endl;
    quicksort(arr, start, end);
    cout<<"after sorting : ";
     for(int i = 0 ; i <= end ; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}