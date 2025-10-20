//Multilevel Inheritance example in c++
#include<iostream>
using namespace std;
class Vechicle{
    public:
    string type;
    string fuel;
    int wheels;
    Vechicle(string t,string f,int w){
        this->type=t;
        this->fuel=f;
        this->wheels=w;
    }
};
class Car : public Vechicle{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z,string t,string f,int w) : Vechicle(t,f,w),brand(x),model(y),year(z){}
    void details(){
        cout<<"Car Brand : "<<brand<<endl;
        cout<<"Car Model : "<<model<<endl;
        cout<<"Car Year : "<<year<<endl;
        cout<<"Car Type : "<<type<<endl;
        cout<<"Car Fuel : "<<fuel<<endl;
        cout<<"Car Wheels : "<<wheels<<endl<<endl;
    }
};
class Bikes : public Vechicle{
    public:
    string brand;
    string model;
    int year;
    Bikes(string x,string y,int z,string t,string f,int w): Vechicle(t,f,w),brand(x),model(y),year(z){}
    void details(){
        cout<<"Brand of bike : "<<brand<<endl;
        cout<<"Model of bike : "<<model<<endl;
        cout<<"Year of bikes : "<<year<<endl;
        cout<<"Type of bike : "<<type<<endl;
        cout<<"Fuel of bike : "<<fuel<<endl;
        cout<<"Wheels of bike : "<<wheels<<endl<<endl;
    }
};
int main(){
    Car car1("Toyota","Corolla",2020,"Electric","Petrol",4);
    car1.details();
    Car car2("Honda","Civic",2019,"Petrol","Diesel",4);
    car2.details();
    Bikes bike1("Yamaha","FZ",2018,"Petrol","Petrol",2);
    bike1.details();
    Bikes bike2("Ducati","Monster",2021,"Electiricty","Petrol",2);
    bike2.details();
    return 0;
}
