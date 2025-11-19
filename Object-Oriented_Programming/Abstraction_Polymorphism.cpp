#include<iostream>
using namespace std;
//Abstract Class Forming
//Parent class form
class Parent{
    public:
    string name;
    int age;
    //Abstract Function && Virtual Function
    virtual void details()=0;
    
};
//Inherit Child class From Parent Class
class Child : public Parent{
    public:
    float weigth;
    float height;
    //Constructor
    Child(string name,int age,float weigth,float height){
        this->name=name;
        this->age=age;
        this->weigth=weigth;
        this->height=height;
    }
    //Polymorphism means Overriding
    void details() override{
        cout<<"Name of Child : "<<name<<endl;
        cout<<"Age of Child : "<<age<<endl;
        cout<<"Weight of Child : "<<weigth<<endl;
        cout<<"Height of Child : "<<height<<endl;
    }
};
//Main Function
int main(){
    //Child Class And Object
    Child* c1 = new Child("Mayank Roy Kapoor",20,75.9f,5.11f);
    c1->details();
    return 0;
}