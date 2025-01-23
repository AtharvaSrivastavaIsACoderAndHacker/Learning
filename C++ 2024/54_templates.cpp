#include<iostream>
using namespace std;


// With one parameter !
template<class tem>
class arraySum{
  tem*arr;
  int len = 0;
  public:
      arraySum(tem* a, int length){
          len = length;
          arr = new tem[len](); // parenthesis in 'new' while dynamically allocating an array, inits all values to 0 !
          for (int i = 0; i < length; i++) {
              arr[i] = a[i];
          }
      }
      void printSum(){
          tem sum = 0;
          for (int i = 0; i < len; i++) {
              sum+=arr[i];
          }
          cout<<sum<<endl;
      }
      ~arraySum() {
          delete[] arr;
      }
};




// With multiple parameters !
template<class d1, class d2>
class actual_STL_type_pair{
    d1 data1;
    d2 data2;
    public:
        actual_STL_type_pair(d1 d, d2 dd){
            data1 = d;
            data2 = dd;            
        }
        d1 first(){return data1;}
        d2 second(){return data2;}
};




int main(int argc, char const *argv[]){
    
    // Templates are used to make versatile classes or functions that work with multiple datatypes without having us to redefine an int based class to work as a float based class !
    // Templates are also known as parameterized classes !
    // Generic Programming refers to writing generic code that works for various datatypes !
    
    int arrInt[5] = {1,2,3,4,5};
    double arrDouble[3] = {1.1, 2.2 , 3.3};
    char arrChar[3] = {'A', ' '}; // ohh sh*t, i forgot it's C/C++ and here '+' does'nt concatenate ! the ASCII values are added and i got a new character !

    arraySum<int> intArray(arrInt, 5);
    arraySum<double> doubleArray(arrDouble, 3);
    arraySum<char> charArray(arrChar, 3);
    
    intArray.printSum();
    doubleArray.printSum();
    charArray.printSum();


    // ====================================================================================================================================

    actual_STL_type_pair<int, int> pair1(1, 2);
    actual_STL_type_pair<int, float> pair2(69, 2.3f);
    actual_STL_type_pair<char, int> pair3('A', 2.3f);

    cout<<pair1.first()<<" | "<<pair1.second()<<endl;
    cout<<pair2.first()<<" | "<<pair2.second()<<endl;
    cout<<pair3.first()<<" | "<<pair3.second()<<endl;

    return 0;
}
