#include<iostream>
using namespace std;

class Employee{
    private:
        int tradeSecret, salary;
    public:
        int id, phoneNo;
        string name;
        void setData(int id, int phoneNo, string name, int tradeSecret,int salary){ //setter
            this->id = id;
            this->name = name;
            this->phoneNo = phoneNo;
            this->salary = salary;
            this->tradeSecret = tradeSecret;
        }
        void getData();
};

void Employee :: getData(){ //getter
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<phoneNo<<endl;
    cout<<salary<<endl;
    cout<<tradeSecret<<endl;
}

int main(int argc, char const *argv[]){

    Employee harry;
    harry.setData(420, 696969, "Harry", 69420, 10000);
    harry.getData();

    return 0;
}