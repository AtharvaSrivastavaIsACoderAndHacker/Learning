#include<stdio.h>

struct Employee{
    int a;
    float b;
    char c;
};

struct Student{
    int a;
    float b;
};


struct baalKatneWaleNaaiUncle{
    char c;
    char d;
    char e;
};

struct aRandomStructure{
    int a;
    double b;
    char cc[4];
};


int main(int argc, char const *argv[]){
    
    // Structure padding is the addition of some empty bytes of memory in the structure to naturally align the data members in the memory. 
    // It is done to minimize the CPU read cycles to retrieve different data members in the structure.
    // sizeof this structure shoulb be 9 bytes right ? Noooooooo ! structure padding is also there ! See :-

    printf("%d\n", sizeof(struct Employee));
    // Output is coming as 12 ! See , 3 bytes are extra empty memory blocks
    /*    
    compiler maintains alignment of various memory locations. Like for int having 4 bytes size it's better to store it at a location 
    with address which is a multiple of 4 and due to which it will be easier to access the same. It is called structure padding.
    */

    printf("%d\n", sizeof(struct Student)); // 8 bytes only because 8 is a multiple of 4
    

    printf("%d\n", sizeof(struct baalKatneWaleNaaiUncle)); // 1 byte only because 1 is a multiple of 1

    // Sidhi saaf baat, jo leading datatype hota hai structure mein, uske size ke multiples mein memory allocation hota hai !

    printf("%d\n", sizeof(struct aRandomStructure)); // See, its 24 bytes because leading datatype is double and doubles size is 8bytes
                                                     // so, the structure is alotted with extra bytes for the sake of efficiency !

    return 0;
}