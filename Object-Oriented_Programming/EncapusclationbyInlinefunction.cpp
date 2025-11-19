#include<iostream>
#include<string>
using namespace std;
class Atm{
    private:
    string name;
    int pin;
    float balance;

    public:
    //Setter function of the Atm class
    inline Atm(string n,int p,float b){
        this->name = n;
        this->pin = p;
        this->balance = b;
    }
    //Getter function of the Atm class
    inline void getAtmData(){
        cout<<"Name : "<<name<<endl;
        cout<<"Pin : "<<pin<<endl;
        cout<<"Balance : "<<balance<<endl<<endl;
    }
    
    //Function to deposit money
    void deposit(float amount){
        this->balance = this->balance + amount;
        cout<<"Amount Deposited Successfully!"<<endl;
    }
    void withdraw(float money ,int p){
        if(this->pin == p){
            if(money <= this->balance){
                this->balance = this->balance - money;
                cout<<"Please collect your cash!"<<endl;
            }
            else{
                cout<<"Insifficient Blanace!"<<endl;
            }
        }
        else{
            cout<<"Invalid Pin!"<<endl;
        }
    }
};
int main(){
    Atm* atm = new Atm("John",9689,1635.50f);
    atm->getAtmData();
    atm->deposit(500.0f);
    atm->getAtmData();
    atm->withdraw(200.0f,9689);
    atm->getAtmData();
    return 0;
}

