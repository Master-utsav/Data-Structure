#include<bits/stdc++.h>

using namespace std;

// single inhertitance
class car{
    
    public:
        string name;
        int number;

    void speed(){
        cout<<"speeding up"<<endl;

    }
    void break_(){
        cout<<"breaking up"<<endl;

    }
    
};

class mercedes : public car{ // single inheritance mercedes is a car 

};


// multilevel inheritance

class fruit{
    public:
        string name;
};

class mango: public fruit{
    public:
        int weight;
};

class alphanso: public mango{
    public:
        int sugarlevel;
};

/* multilevel inheritance , if we have same type of data members with same variable name ambiguity show by complier , complier confuse now which data member they should call so we use :: scope resolution operator to calify that class name */
class sub1{
    public:
        int physics;
};

class sub2{
    public:
        int physics;
        int chemistry;
};

class sub3: public sub1 , public sub2{
    public:
        int maths;
};

// herarchial inheritance

class Car{
    public:
        string name;

        void speeder(){
            cout<<"speedup";
        }
};

class farari: public Car{

};
class lambo: public Car{

};


int main(){
    mercedes utsav;
    utsav.speed();
    cout<<endl;

    alphanso a;
    a.name = "Mango";
    a.weight = 340;
    a.sugarlevel = 120;
    cout<<a.name<<endl<<a.weight<< "gram"<<"\nsugar level : "<<a.sugarlevel<<endl<<endl;

    sub3 pcm;
    pcm.chemistry = 98;
    pcm.sub1::physics = 95;
    pcm.sub2::physics = 91;
    pcm.maths = 100;
    cout<<"Chemistry: "<<pcm.chemistry<<"\nphysics in sub1 class: "<<pcm.sub1::physics<<"\nphysics in sub2 class: "<<pcm.sub2::physics<<"\nmaths: "<<pcm.maths<<endl<<endl;

    farari f11;
    f11.name = "farari";
    cout<<f11.name<<endl;
    f11.speeder();
    cout<<endl;
    lambo l11;
    f11.name = "lamborgini";
    cout<<f11.name<<endl;
    f11.speeder();
    cout<<endl<<endl;



    return 0;
}

