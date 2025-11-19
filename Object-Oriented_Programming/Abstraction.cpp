#include<iostream>
using namespace std;
//Abstract class Forming
//Parent class form(Built)
class Parent{
    public:
    string name;
    int age;
    //Abstract function || virtual function
    virtual void details()=0;
    
};
//Child class inherit from Parent class
class Child : public Parent{
    public:
    //Constructor
    Child(string n,int a){
        this->name=n;
        this->age=a;
    }
    //Child Class have self function
    void information(){
        cout<<"-----------------------------------"<<endl;
        cout<<"Information About Child Are : "<<endl;
    }
    //Overriding
    void details() override{
        cout<<"Name of Child : "<<name<<endl;
        cout<<"Age of Child : "<<age<<endl;
    }
};
//Main function
int main(){
    //child object and child class
    Child* c1 = new Child("Mayank",72);
    //call details function to print its details
    c1->information();
    c1->details();
    return 0;
}