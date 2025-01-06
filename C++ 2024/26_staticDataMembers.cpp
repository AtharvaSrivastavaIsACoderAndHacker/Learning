#include<iostream>
using namespace std;

class Employee{
    int salaryHikePercentage = 8;
    static int count;// static or class variables are always initialized to 0 for the 1st time but retains the value from then on !
    public:
        double salary;
        string name;
        void setData(string name, int salary){this->name = name;this->salary = salary;count++;} 
        void getData(){cout<<count<<" "<<name<<" | "<<salary<<endl;};
        void pagarBadhao(){salary *= (100+salaryHikePercentage)/100.0;} // beware of int division with float rounding error
};
int Employee:: count; // (definition) i want it to be static throught the runtime and to preserve the no. of employees !, so static !


int main(int argc, char const *argv[]){
    
    Employee Ishi, ansh;
    Ishi.setData("Ishi", 10000);
    Ishi.getData();
    Ishi.pagarBadhao();
    Ishi.getData();
    
    ansh.setData("Ansh", 10);
    ansh.getData(); // see count is two because the value of count is retained across objects because of static !
    ansh.pagarBadhao();
    ansh.getData(); // see how the value is'nt lost after the execution because it has a separate space in memory !

    cout<<sizeof(Ishi)<<endl; // 36 = 24(string) + 8 + 4 ------> 36 + 4(padding) == 40 --> only non static members' memory is calculated !
    
    return 0;
}

// The size of an object in C++ is determined by the sizes of its non-static data members, alignment requirements, and padding 
//                                                                                 added to meet those alignment requirements.

// Alignment and Padding:
//    - To ensure proper memory alignment for performance reasons, compilers add padding between members and at the end of the class. For example:
//      - `double salary` requires 8-byte alignment.
//      - After `int salaryHikePercentage` (4 bytes), there might be 4 bytes of padding to align `salary`.
//    - The total size becomes 40 bytes, aligning the `std::string` (24 bytes) to the next multiple of 8.

// Memory Layout (Assuming GCC/Clang on a 64-bit system)
// Here’s how the memory might be laid out:

// | Member                    | Size (bytes) | Alignment | Notes                        |
// |---------------------------|--------------|-----------|------------------------------|
// | `salaryHikePercentage`    | 4            | 4         | `int`, padding added below.  |
// | Padding                   | 4            |           | To align `double`.           |
// | `salary`                  | 8            | 8         | `double`.                    |
// | `name` (std::string)      | 24           | 8         | Typical implementation size. |
// | **Total**                 | **40**       |           | Includes padding.            |