#ifndef MYSTACK
#define MYSTACK

#include<iostream>

using namespace std;

class Mystack{
     
     public:
        int*arr;
        int size;
        int top;

        Mystack(int size){
            arr = new int [size];
            this->size = size;
            this->top = -1;
        }

        void push(int data){

            if(top == size -1 ){
                cout<<"stack overflow "<<endl;
                return;
            }
            else{
                top++;
                arr[top] = data;
            }
        }

        void pop(){

            if(top == -1){
                cout<<"stack underflow "<<endl;
                return;
            }

            else{
                top--;
            }
        
        }

        int getTop(){

            if(top == -1){
                cout<<"stack underflow "<<endl;
                return (int)NULL;
            }
            else{
                return arr[top];
            }
        }

        bool isEmpty(){
            if(top < 0){
                return true;
            }
            else{
                return false;
            }
        }

        int getSize(){
            return top + 1;
        }
        
        void printStack(){

            cout<< "stack : ";

            for( int i = 0 ; i < getSize() ; i++){
                 cout<<arr[i]<< " ";
            }
            cout<<endl;
        }


};


#endif