#include<bits/stdc++.h>

using namespace std;

// Function overloading (compile time polymorphism)
class Sum{
    public:
        int sum(int a, int b ){
            return a+b;
        }
        int sum(int a, int b , int c ){
            return a+b+c;
        }
        int sum(int a, float b ){
            return a+b;
        }
        int sum(float a, float b ){
            return a+b;
        }
};

// operator overloading (compile time polymorphism)

class param{
    public:
        int num;

        void operator*(param& obj2){
             int value1 = this->num;
             int value2 = obj2.num;
             cout<<value2 - value1<<endl<<endl;
        }
};

// function overriding ( run-time polymorphism)

class animal{
    public:
    animal(){
        cout<<"i am a animal constructor"<<endl;
    }
    // by virtual keyword jo bhi object hoga usi ka function call hoga fir 
        virtual void speak(){ 
            cout<<"speaking"<<endl;
        }
};

class Dog : public animal{
    public:
    Dog(){
        cout<<"i am a dog constructor"<<endl;
    }
        void speak(){
            cout<<"barking"<<endl;
        }
};
class parrot : public animal{
    public:
    parrot(){
        cout<<"i am a parrot constructor"<<endl;
    }
        void speak(){
            cout<<"mithu"<<endl;
        }
};

void speak(animal* animal){
    animal->speak();
}

int main(){
    
    Sum para_2_input;
    
    cout<<para_2_input.sum(2,7)<<endl;
    cout<<para_2_input.sum(2,7,1)<<endl;
    cout<<para_2_input.sum(2,7.5f)<<endl;
    cout<<para_2_input.sum(2.9f,7.5f)<<endl<<endl;

    param object1, object2;
    object1.num = 2;
    object2.num = 5;

    object1 * object2;/* this operator * now works on the function void opertaor * in that function we specifically say that * refers to     subtract */
   
    animal man;
    man.speak();
    Dog sultan;
    sultan.speak();
    cout<<endl;
    

    // if we call that function dynamcally
    // upCasting showed here , the property of the class which is at pointer shows so speak call from animal not from dog for chaning that we have to use virtual keyword in the animal speak function
    animal* a = new Dog();
    a->speak(); // in this scenario dog is inherit from animal class thats why animal constriuctor called first then dog coonstructor called
    
    // downCasting { this was not used mainly, most of the time we use upcasting only}
    Dog* b =(Dog*) new animal();
    b->speak(); // in this scenario animal is an object which is not inherit from anywhere so only the animal constructor was called
    
    animal* ani = new Dog();
    speak(ani);

    ani = new parrot();
    speak(ani);
    return 0;
}