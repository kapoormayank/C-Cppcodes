#include<iostream>
using namespace std;
class Demo{
    int a = 954;
    private:
    int x = 343;
    protected:
    int y = 56;
    public:
    int z = 89;
    void show(){
        cout<<"Default Datatype : "<<a<<endl;
        cout<<"Private datatype value : "<<x<<endl;
        cout<<"Protected datatype value : "<<y<<endl;
        cout<<"Public datatype value : "<<z<<endl;
    }
    
    //Getter function to access protected data memeeber
    
    int gety(){
    return y;
    }
};
int main(){
    Demo obj;
    obj.show();
    cout<<"\nProtected datatype : "<<obj.gety()<<endl;
    cout<<"Public datatype : "<<obj.z<<endl;
    return 0;
}