#include <iostream>
using namespace std;

// int func(int n){

//   if(n%4 == 0){
//     return 0;
//   }
//   if(n%4 == 1){
//     return 1;
//   }
//   if(n%4 == 2){
//     return n + 1;
//   }
//   else{
//     return 0;
//   }
// }
// bool isPowerOfTwo(unsigned int x){
//        return(!(x&(x-1)));
//  }

// int function(unsigned n)
// {
// if(!isPowerOfTwo(n)) return -1;
// unsigned i = 1, pos = 1;
// while(!(i & n)){
// i = i << 1;
// pos++;
// }
// return pos;
// }

// void bin(int n){
//   if(n>1){
//     bin(n/2);
//     cout<<n%2;
//   }
// }

// bool func(int x , int y ){

//   return((x^y)<0);
// }

// bool func(int x , int y ){

//   bool bit = x & (1<<y);

//   return bit;
// }

//  bool power(unsigned int x){
//         return(!(x&(x-1)));
//   }

  // void fun(int &num, int k) { 
  //   num &= (~ 1<<k);
  //    }

// int function(int n){ int count = 0; while(n){
// n &= (n-1);
// count++;
// }
// return count;
// }


int main() {



    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;

    // for (int rows = 0; rows < num; rows++)
    // {
    //     for (int spaces = 0; spaces < num-rows-1; spaces++)
    //     {
    //         cout<<"  ";
    //     }

    //     for (int col = 0; col < 2*rows+1; col++)
    //     {
    //         if (col > rows)
    //         {
    //             cout<<2*rows-col+1<<" ";
    //         }
    //         else{
    //             cout<<rows+col+1<<" ";
    //         }


    //     }
    //     cout<<endl;

    // }


  //1 
  // int n;
  // cin >> n;

  // cout<< ((++n) * (n++)) ; 


//2
//   cout << endl;
//   for (int row = 0; row < n; row = row + 1) {

//     for (int col = 0; col < 2 * n - row - 2; col = col + 1) {
//       cout << "* ";
//     }

//     for (int col = 0; col < row + 1; col = col + 1) {
//       if (col == row + 1 - 1)
//         cout << row + 1;
//       else
//         cout << row + 1 << " * ";
//     }

//     for (int col = 0; col < 2 * n - row - 2; col = col + 1) {
//       cout << " *";
//     }

//     cout << endl;
//   }

//3

    //  int a = 8; 
    //  int b = 7;

    //  float c = a/b;
    //  cout<<c<<endl;

    //  c = ((float)a)/b;
    //  cout<<c<<endl;

    //  c = a/((float)b);
    //  cout<<c<<endl;

  
  //  int x=-5;
  //  x=x>>1;
  //  cout<<x<<endl;

  // int x = 20;

  // x= x & (x-1);
  // cout<<x;

  //  cout<<power(0);

// int num = 7; 
// int k = 1; 
// fun(num, k); 
// cout << num << endl; 
// return 0;
  // int num;
  // cin>>num;

  // func(num);
    
  //   int x= 13;
  //   int y = 4;
  //   cout<<(x^y);

  // int ans =  function(128);

  //  if(~0 == 1){
  //   cout<<"yes";
  //  }
  //  else{
  //   cout<<"no";
  //  }
   
  // cout<<func( 5, 2);


  // float x = 9;
  // char ch = 'a';

  // cout<<x+((float)ch);
  
//   int a = 1^2;
//   cout<<a<<endl;;
  
//   a = 2^3;
//   cout<<a<<endl;

//   a= 3^4;
//  cout<<a<<endl;

//   a= 4^5;
//   cout<<a<<endl;

//   a= 5^6;
//   cout<<a<<endl;

//   a= 6^1;
//   cout<<a<<endl;

  // a= 7^8;
  // cout<<a<<endl;

  // a= 8^9;
  // cout<<a<<endl;

  // a = 9^10;
  // cout<<a<<endl;

  string ch;
  getline(cin , ch);

  ch.erase(3,5);
  cout<<ch;


  return 0;
  //  cout<<"hello";
 
}