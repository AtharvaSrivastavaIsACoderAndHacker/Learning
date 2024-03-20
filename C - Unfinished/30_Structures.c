#include<stdio.h>
#include <string.h>

// * declaration with definition
struct Student {
    int id;
    char name[35];
    float marks;
}s1,s2;


// * declaration without definition
struct Employee {
    int id;
    char name[35];
    float salary;
};

struct Candidate {
    int id;
    char name[35];
};

int main(int argc, char const *argv[]){
    
    // Structures are just like classes, but a little different !
    // Structures are generally declared outside main(), if we define it in main() then, its scope is limited to main() function only !
    // If You Want To Use A Structure in another function, you need to declare it outside main() function
    // There are two ways of declaring a structure :-
        // * declaration with definition
    //     * declaration without definition
    // "." operator is called as the structureMmemberOperator. Structure members can be accessed through this operator like --> e1.name
    // "->" operator is called as the structureMmemberOperator. Structure members can be accessed through pointers by this operator like
    // structureName.memberName syntax is used to access structure members


    // General C Language ka gyan :-
    //     * while an assignment, the left side of the assignment has lvalue whereas, the right side of the assignment has rvalue.
    //     * lvalue = rvalue



    struct Employee e1 = {420,"Employee1",10000.2};
    puts(e1.name);

    struct Employee e2;
    e2.id = 100;
    // e2.name = "Employee2"; -----> this is wrong
    strcpy(e2.name, "Employee2"); // arrays in a structure need to be initialized like this
    e2.salary = 20000.4;



    // -----------------------------------------------------------------------------------------------------------------------------------


    // // Arrays can also contain structures in it !!!!! PRACTICAL EXAMPLE With Array Of Structures : Storing Data Of 5 Candidates
    // struct Candidate candidate3Array[5];
    //
    // for (int i = 0; i < 5; i++){
    //     struct Candidate c;
    //     candidate3Array[i] = c;
    // } // now each block of the array has a structure of candidate initialized in it and can be accessed by arrayName and subscript variable !
    
    
    // for (int i = 0; i < 5; i++){
    //     char name[35];
    //     printf("Enter the name of Candidate %d : ",i+1);
    //     gets(name);
    //     strcpy(candidate3Array[i].name,name);
    // } // each structure of this array has been assigned a value to the name criteria !


    // for (int i = 0; i < 5; i++){
    //     int id;
    //     printf("Enter the ID of Candidate %d : ",i+1);
    //     scanf("%d",&id);
    //     candidate3Array[i].id = id;
    // } // similarly, we assigned values to the id criteria of the Candidate structure !

    // // Now I have an array with data of 5 candidates !!!!! I can access it and use the data efficiently now !
    
    
    // -----------------------------------------------------------------------------------------------------------------------------------


    
    return 0;
}