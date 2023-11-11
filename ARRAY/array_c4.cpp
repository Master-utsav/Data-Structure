#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main(){
    
    int arr[] = {1 ,2, 3 ,4 ,5 , 6 , 7};
    int n = 7;
    int target;

    cout<<"guess the number in aaray : ";
    cin>>target;

    bool flag = 0;

    for( int i = 0 ; i < n ; i ++ ){

        if( arr[i] == target ){

            flag = 1;
        }
    }

    if( flag == 1 ){

        cout<<"target found"<<endl;
    }
    else{

        cout<<"target not found";
    }
    
    return 0;
}