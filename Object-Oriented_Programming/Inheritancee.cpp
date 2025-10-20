//Simple program to demostrate Single inheritance
#include<iostream>
using namespace std;
class Vechicle{
    public:
    string name;
    string model;
    int price;
    public:
    Vechicle(string n,string m,int32_t p){
        this->name=n;
        this->model=m;
        this->price=p;
    }
    void details(){
        cout<<"Vechicle name : "<<this->name<<endl;
        cout<<"Vechicle model : "<<this->model<<endl;
        cout<<"Vechicle price : "<<this->price<<endl;
    }
};
class Car : public Vechicle{
    string color;
    string brand;
    public:
    Car(string n,string m,int p,string c,string b) : Vechicle(n,m,p) , color(c),brand(b){}
    void details(){
        cout<<"Car name : "<<name<<endl;
        cout<<"Car model : "<<model<<endl;
        cout<<"Car price : "<<price<<endl;
        cout<<"Car color : "<<color<<endl;
        cout<<"Car brand : "<<brand<<endl<<endl;
    }
};
int main(){
    cout<<"Overriding in child by parent class function"<<endl<<endl;
    Vechicle* car = new Car("Toyota","Corolla",20000.0,"Red","Toyota");
    car->details();
    return 0;
}
