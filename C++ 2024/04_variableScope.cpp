#include<iostream>
using namespace std;


int globalll = 69;

int func1(){
    cout<<"even this function can access the global variable ! "<<globalll<<"\n";
    // cout<<onlyMains; --> this will throw an error as onlyFans.....cough....coughhhhh....onlyMains is a variable local to main() !
}


int main(int argc, char const *argv[]){
    
    // Scope of variables :-
    // * Local --> can only be used in the block it's defined in - a var declared in main() can be used in main() - only defined in a function
    int onlyMains = 18; // see func1 can't access it !
    // * Global --> its defined outside any function, so all functions can access it !
    func1();
    cout<<globalll<<"\n"; // see I can use it in main() aswell as in func 1 !





    // Local variable has precedence over global !
    // If a local and global variable are with the same name, upon accessing the name, local variable will be used (prioritised) !

    int globalll = 10; // global var globalll's value isnt changed, a new local variable named globalll is created !
    func1(); // see global globalll is still 69 ! func1() accesses it becoz func1() prioritises global coz it has no local !!
    cout<<globalll<<"\n"; // but if i use local globalll, I'll get 10 !
    

    
    return 0;
}