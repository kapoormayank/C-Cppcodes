//Function Overloading example in c++
#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<"Sum of two integer numbers is : "<<a+b<<endl;
}
void add(double a,double b){
    cout<<"Sum of two double numbers is : "<<a+b<<endl;
}
void add(float a,float b){
    cout<<"Sum of two float numbers is : "<<a+b<<endl;
}
void add(string a,string b){
    cout<<"Concatenation of two string is : "<<a+b<<endl;
}
int main(){
    int a=5,b=10;
    add(a,b);
    double c=5.5,d=10.5;
    add(c,d);
    float e=5.5f,f=10.5f;
    add(e,f);
    string g="Hello",h="World";
    add(g,h);
    return 0;
}

