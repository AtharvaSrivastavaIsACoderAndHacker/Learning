#include<iostream>
using namespace std;

class Employee{
    protected:
        double salary;
        string name;
        Employee(string n, int s){
            this->name = n;
            this->salary = s;
        }
        void printNameAndSalary(){cout<<name<<" | "<<salary<<endl;};
};

class Programmer: protected Employee{
    public:
        string primeLanguage; 
        Programmer(string n, double sal, string pLang):Employee(n,sal){
            this->primeLanguage = pLang;
        } 
        void printProgrammerData(){cout<<"Programmer Data : "<<name<<" | "<<salary<<" | "<<primeLanguage<<endl;} 
};


int main(){
    
  // DYNAMIC MEMORY ALLOCATION IN CPP --> is done in  heap memory !
  // new and delete are new ways for dyanmic allocation, you can also use the oldschool C-style memory allocation using stdlib.h in cpp too !
  // stdlib.h abhi bhi zinda hai, new and delete are just some easier ways ! malloc jindabad !!!!!
  // new keyword in cpp is used for dynamic memory allocation ! 
  // delete keyword is used to deallacate memory !
    





  int * ptr = new int(4); // dynamically allocates an int space in memory initialized to the value 4 !
  cout<<*ptr<<endl; // prints 4
        
  int* ptrArr = new int[10]; // syntax to allocate space for an array !
  for (int i = 0; i < 10; i++){
        ptrArr[i] = i * 10;
  }
  for (int i = 0; i < 10; i++){
        cout<<ptrArr[i]<<endl;
  }
  
  delete ptr; // syntax to free one block of memory that was dynamically allocated !
  delete[] ptrArr; // syntax to free contiguous blocks of memory that was dynamically allocated to form an  array !
  cout<<"there is no guarantee that a correct value'll be printed, coz the memory is freed up ! --> "<<ptrArr[0]<<endl;








  // Pointers, Dynamic Mem allocation and classes ! messing around !
  Programmer * dangerousCoder = new Programmer("Atharva", 1 , "C/C++");
  (*dangerousCoder).printProgrammerData(); // pointer dereference
  dangerousCoder->printProgrammerData();   // modern ways of doing the same thing as the above line, '->' way pointer dereference is not required !


  Programmer Coder("Ishi", 1 , "JS");
  Programmer * CoderPtr = &Coder; // instead of dynamically making the object, pointers can be directed towards an existing object too !
  CoderPtr->printProgrammerData();






  // ARRAY OF OBJECTS
  Programmer* programmerArray[2]; // You cannot call the constructor on an already constructed object. SO we need to initially, not define our array, we will do that later one by one to invoke their individual constructors !
  programmerArray[0] = new Programmer("AtharvaInArray", 1, "C/C++");
  programmerArray[1] = new Programmer("IshiInArray", 2, "JS");

  programmerArray[0]->printProgrammerData();
  programmerArray[1]->printProgrammerData();

  return 0;
}
