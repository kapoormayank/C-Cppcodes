//Use inline functions to reduce the function call overhead for small functions
//Inline functions are defined with the inline keyword before the function return type
//When the inline function is called , the compiler replaces the function call with the actual function code
//This can improve performance for small functions that are called frequently

#include<iostream>
using namespace std;
class Father{
    public:
    string name;
    int age;
    string gender;
    Father(string n, int a, string g){
        this->name = n;
        this->age = a;
        this->gender = g;
    }
    inline void display(){
        cout<<"Father Name : "<<this->name<<endl;
        cout<<"Father Age : "<<this->age<<endl;
        cout<<"Gender : "<<this->gender<<endl<<endl;
    }
};
class Child : public Father{
    float weight;
    float height;
    public:
    Child(string n,int a , string g,float w,float h):Father(n,a,g),weight(w),height(h){}
    inline void show(){
        cout<<"child Name : "<<name<<endl;
        cout<<"Child Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Weigth : "<<weight<<endl;
        cout<<"Height : "<<height<<endl<<endl;
    }
};
class Boy{
    private:
    string hobby;
    public:
    void setData(string hob){
        hobby=hob;
    }
    string getData(){
        return hobby;
    }
};
int main(){
    cout<<"Inline function in Inheritance : "<<endl;
    Father* obj = new Father("John",50,"Male");
    obj->display();
    Child* obj1 = new Child("Mike",20,"Male",70.5f,180.2f);
    obj1->show();
    cout<<"Inline function in Polymorphism : "<<endl;
    Father* ptr = new Child("David",25,"Male",78.9f,175.3f);
    ptr->display();
    Boy* b = new Boy("Reading");
    cout<<"Hobby : "<<b<<endl;
    return 0;
}
