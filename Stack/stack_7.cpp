#include<bits/stdc++.h>

// implementing 2 stacks in a single array

using namespace std;

class mystack{

    public:
        int* arr;
        int size;
        int top1;
        int top2;

        mystack(int size){
            arr = new int[size];
            this->size = size;
            this->top1 = -1;
            this->top2 = size;
        }

        void push1(int data){

            if(top2 - top1 == 1){
                cout<<"OVERFLOW"<<endl;
            }
            else{
            top1++;
            arr[top1] = data;
            }
        }

        void push2(int data){

            if(top2 - top1 == 1){
                cout<<"OVERFLOW"<<endl;
            }
            else{
            top2--;
            arr[top2] = data;
            }
        }

        void pop1(){

            if(top1 == -1){
                cout<<"UNDERFLOW"<<endl;
            }
            else{
            arr[top1] = 0;
            top1--;
            }
        }

        void pop2(){

            if(top1 == -1){
                cout<<"UNDERFLOW"<<endl;
            }
            else{
            arr[top2] = 0;
            top2++;
            }
        }

        int getTop1(){
                return arr[top1];
        }

        int getTop2(){
                return arr[top2];
        }
        

        void print(){

            cout<<"top1 : "<<getTop1()<<"    top2 : "<<getTop2()<<endl;
            for(int i = 0 ; i < size ; i++){
                cout<<arr[i] << "  ";
            }
            cout<<endl;
        }
};


int main(){

    mystack st(6);
    st.print();

    st.push1(10);
    st.print();

    st.push1(20);
    st.print();

    st.push2(100);
    st.print();

    st.push2(200);
    st.print();

    st.push2(300);
    st.print();

    st.push2(400);
    st.print();

    st.push1(12);

    st.pop1();
    st.print();

    st.pop1();
    st.print();

    st.pop1();

    return 0;
}