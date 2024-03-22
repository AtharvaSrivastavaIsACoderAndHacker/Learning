#include<stdio.h>

union Employee{
    char character;
    int salary;
};


int main(int argc, char const *argv[]){
    
    // Unions are very very similar to structures
    // Unions are user defined data types
    // In a structure, each member has its own memory location, Union members use a single shared memory location !
    // This single shared memory location of union members is equal to the size of its largest data member.
    // Unions are sometimes memory efficient but they cant handle all union members at once !

    // A Nice YouTube Comment On Structures And Unions :-
    /* 
    Structure : My memory
    Union : Our memory 
    */
    
    // struct Employee{ // Total size of this structure is 24 bytes !
    //     int id; // 4 bytes
    //     char name[20]; // 1*20 bytes
    // };
    
    // union activeEmployee{ // Total size of this structure is not 40 bytes, rather its 20 bytes(20 bytes is the size of largest data member).
    //     char nameOfDayShiftEmployee[20]; // 1*20 bytes
    //     char nameOfNightShiftEmployee[20]; // 1*20 bytes
    // };

    // Union members are used one at a time. Ek baar mein sirf ek member use hota hai to baakiyon ki memory reserve leke khali rakhna is waste!
    // In case of activeEmployee, only 1 member's name is used at a time, so using struct here is wasteOfMemory coz in it, 40 bytes will be used

    // "." operator is called as the unionMmemberOperator. Union members can be accessed through this operator like --> e1.name
    // "->" operator is called as the unionMmemberOperator. Union members can be accessed through pointers by this operator like --> e1->name
    // -> can be used if we are referring to use pointers in the program !!!!!
    // Syntax of unions are very similar to that of structures




    // LIVE PROOF : Unions cant handle all union members at once !
    union Employee e1;
    e1.character = 'H'; // memory allocated to H !
    e1.salary = 100000; // sharedMemory allocated to 100000 and H got disposed to free up the sharedMemory !

    printf("%c\n",e1.character); // garbabe value is printed bcoz after character was set as H , salary was assigned a value of 100000,
                                 // so, H got disposed and the union shared its sharedMemory with salary  !
    printf("%d\n",e1.salary); // Output == 100000


    e1.character = 'I'; // memory allocated to I and salary's value is disposed !
    printf("%c\n",e1.character); // Output == I !!!!! bcoz character was set as I after the allocation of salary, so salary's value 
                                 // was disposed to free up sharedMemory for character's assignment !
    printf("%d\n",e1.salary); // garbabe value is printed bcoz after salary was set character was assigned, so salary's value was disposed !
    


    
    return 0;
}