#include<bits/stdc++.h>

using namespace std;

class Animal{
    // state or properties
    // by default private

    int weight;

    public:
    int age;
    string name;


    // behaviour
    void eat(){
       cout<<"eating"<<endl;
    }

    void sleep(){
          cout<<"sleeping"<<endl;
    }

    void setdata( int w ){
        weight = w;
    }

    int getdata(){
        return weight;
    }
};

int main(){
    
    // object creation
    

    // static
    Animal kanishka;

    kanishka.age = 90;
    kanishka.name = "bitch";
    cout<<kanishka.age<<endl;
    cout<<kanishka.name<<endl;

    kanishka.eat();
    kanishka.sleep();

     kanishka.setdata(120);
     cout<<kanishka.getdata();

    // Dynamic memory

    Animal* mine = new Animal;

    (*mine).age = 20;  // we use this beacuse we know how to acces the value of pointer 
    (*mine).name = "utsav";

    cout<<(*mine).age<<endl;
    cout<<(*mine).name<<endl;

    // alternate method 

    mine->age = 21;
    mine->name = "utsav";

    cout<<mine->age<<endl;
    cout<<mine->name<<endl;

    mine->eat();

    return 0;
}