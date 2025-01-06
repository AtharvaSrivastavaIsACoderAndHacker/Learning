#include <iostream>
using namespace std;

class Employee{
  int secret;
  public:
      friend void printSecret(Employee a);
      void setSecret(int s){
        this->secret = s;
      }
};

void printSecret(Employee a){
  cout<<a.secret<<endl;
}

int main(){

    // Friend Functions :
    //    * friend functions don't belong to the class
    //    * friend functions have permissions to access private members of a class given by the class itself !
    //    * it cannot be called from class objects like normal functions of the class, because it's not a member of that class !
    //    * it can be invoked without any object !
    //    * usually contains objects as args, usually, not definitely !
    //    * can be declares in either public tag or private tag. it's the same thing !
    //    * it cannot access class members directly ! objName.memberName can be done -- that's why objs are taken as args !
    //    * A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.
    //    * A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class.
    //    * The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.
    //    * A friend function is called like an ordinary function. It cannot be called using the object name and dot operator.
    //    * A friend function can be declared in any section of the class i.e. public or private or protected.

    Employee Atharva, Ansh;

    int x;
    cin >> x;
    Atharva.setSecret(x);
    cin >> x;
    Ansh.setSecret(x);

    printSecret(Atharva);
    printSecret(Ansh);

  return 0;
}
