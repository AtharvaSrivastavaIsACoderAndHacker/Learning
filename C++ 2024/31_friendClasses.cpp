// // Trying to make class employeeManager able to access class Employee private data without friend class !
// // Individually declaring as friend functions !

// #include<iostream>
// using namespace std;

// // Forward Declaration for compiler to know that Employee class it defined afterwards !
// class Employee;

// class employeeManager{
//   int noOfEmployees;
//   public:
//       void printSecret(Employee);
// };

// class Employee{
//   int secret;
//   friend void employeeManager::printSecret(Employee a); 
//   public:
//         void setSecret(int s){
//         this->secret = s;
//       }
// };

// void employeeManager::printSecret(Employee a){
//         cout<<a.secret<<endl;
// }


// int main(int argc, char const *argv[]){
   
//   Employee vsauce;
//   vsauce.setSecret(10000000);
//   employeeManager vsauceFather; vsauceFather.printSecret(vsauce);

    
//   return 0;
// }





// ======================================================================================================================================





// // Trying to make class employeeManager able to access class Employee private data with the use of friend classes !
// // Employee class has befriended employeeManager class and manager can access employee's private data without each indivdual friend function declaration, just once befriending the class is enough !


#include<iostream>
using namespace std;

// class employeeManager;

class Employee{
 int secret;
  public:
      void setSecret(int s){
        this->secret = s;
      }
  friend class employeeManager;
};


class employeeManager{
  int noOfEmployees;
  public:
      void printSecret(Employee  a){ // this function isn't given any friend declaration,but can access Employee's data coz it's class is a friend of Employee;
        cout<<a.secret<<endl;
}
};

int main(int argc, char const *argv[]){
   
  Employee vsauce;
  vsauce.setSecret(10000000);
  employeeManager vsauceFather; vsauceFather.printSecret(vsauce);
    
  return 0;
}
