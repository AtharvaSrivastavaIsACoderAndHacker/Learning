#include<iostream>
#include<cmath>
using namespace std;

class calc{
    public:
        template<typename varplus,  typename varpluss>
        static void printSum(varplus  a, varpluss b){ // no need to take operator as char and use switch ! directly take any datatype and sum it ! error aaya to ve user ki glti, usne aand band values daali !
            cout<<a+b<<endl;
        }
        template<typename varsub,  typename varsubb>
        static void printDiff(varsub  a, varsubb b){
            cout<<a-b<<endl;
        }
        // template<typename varRound>
        // static void printRound(varRound a){ // this way can also be used --> declaration and definition together !
        //     cout<<round(a)<<endl;
        // }
        template<typename varRound>
        static void printRound(varRound a); // declaration

};

template<typename varRound>
void calc::printRound(varRound a){ // definition 
      cout<<round(a)<<endl; 
}




// FUNCTION TEMPLATE OVERLOADING
void func1(int a){ // this function is an exact match for call -- func1(12);
    cout<<"I am func1() "<< a <<endl;
}

template <typename T>
void func1(T a){ // this function CAN BE MADE an exact match by templates but currently it isn't, for call -- func1(12);
    cout<<"I am templatised func1() "<< a <<endl;
}




int main(){

    calc::printSum(10, 20);
    calc::printDiff(12,13.5);
    calc::printRound(10);
    calc::printRound(10.4533543);

    // ========================================================================================
    
    // Exact match takes priority over templatised functions because their datatype is statically bound at compile time 
    func1(12); // calls func1(int a) version !
    
    // But here, there's no match  except the artificial match by templatised function is there !
    func1(4.5);

    return 0;
}
