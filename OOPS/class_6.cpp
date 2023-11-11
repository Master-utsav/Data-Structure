#include<bits/stdc++.h>

using namespace std;

// static keyword in c++

class abc{
    public:
        static int x,y;

        void print(){
            cout<<x<<"  "<<y<<endl;
        }
};
int abc::x;
int abc::y;

int main(){
    abc obj1,obj2;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();

    obj2.x = 10;
    obj2.y = 20;
    obj1.print(); 
    obj2.print();
    return 0;
}