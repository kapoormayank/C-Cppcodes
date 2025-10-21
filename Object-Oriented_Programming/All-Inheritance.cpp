#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"This animal eats food."<<endl;
    }
};
//single Inheritance
class Dog : public Animal{
    public:
    void bark(){
        cout<<"The dog are bark."<<endl;
    }
};
//Multilevel Inheritance
class Puppy : public Dog{
    public:
    void flexibity(){
        cout<<"Puppy is very flexible!"<<endl;
    }
};
class Speed{
    public:
    void speed(){
        cout<<"Speed of animal!"<<endl;
    }
};
//Multiple Inheritance
class fitness : public Animal,public Speed{
    public:
    void fast(){
        cout<<"Fast animal!"<<endl;
    }
};
int main(){
    //Single Inheritance
    cout<<"\n-- Single Inheritance --"<<endl;
    Dog dog;
    dog.eat();
    dog.bark();
    //Mutilevel Inheritance
    cout<<"\n-- Multilevel Inheritance --"<<endl;
    Puppy p1;
    p1.eat();
    p1.bark();
    p1.flexibity();
    //Mutliple Inheritance
    cout<<"\n-- Multiple Inheritance --"<<endl;
    fitness f1;
    f1.eat();
    f1.speed();
    f1.fast();
    return 0;
}

