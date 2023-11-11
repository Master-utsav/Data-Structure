#include<bits/stdc++.h>

using namespace std;

class Animal{
    
    int weight;

    public:
    int age;
    string name;

    void eat(){
        cout<<"eating";
    }

    void sleep(){
        cout<<"sleeping";
    }
    
    // default constructor
    Animal(){

        this->age = 0;
        this->weight = 0;
        this->name = {};

        cout<<"constructor called"<<endl;

    }
    
    // paramaterized constructor
    Animal(int age){
        this->age = age;

        cout<<"parmaterized constructor 1 is called"<<endl;
    }

    Animal(int age , int weight){
        this->age = age;
        this->weight = weight;

        cout<<"parmaterized constructor 2 is called"<<endl;
    }

    Animal(int age , int weight , string name ){
        this->age = age;
        this->weight = weight;
        this->name = name;

        cout<<"parmaterized constructor 3 is called "<<endl;
    }

    // copy constructor // make sure you passed the argumnet by refernece 0otherwise it trappped in a infinite calling loop
    Animal(Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;

        cout<<"copy constructor is called"<<endl;

    }

    // destructor
    ~Animal(){
        cout<<"destructor is called "<<endl;
    }
    

};

int main(){
    
    Animal a; // static object creation
    Animal* b = new Animal;  // dynamic object creation

    Animal* c = new Animal(23);
    Animal* d = new Animal(23 , 102);
    Animal* e = new Animal(23 , 102 , "helio");
     
    Animal f = a;
    Animal g(*b);
    Animal h(f);

    // in static obj creation destructor is auto called nut in case of dynamic we have to call by using delete key word

    delete b;
    delete c;
    delete d;
    delete e;
    
    return 0;
}