#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int thisVariableIsInTheStackframeOfMain;
    printf("%d\n",thisVariableIsInTheStackframeOfMain);

    // dynamicMemoryAllocation (dMA) is a way by which the size of a data structure can be changed during runtime !!!!!
    
    // Static Memory Allocation vs dMA --> https://youtu.be/kmV55hPsSQE?si=aNbvLXS053glYuQi&t=240

    // Memory assigned to a program in a typical architecture can be broken down into four segments :
        // * Code or Text Segement (Its saved first when a program gets compiled !)
        // * Static/Global Variables (Then There Variables are saved / stored !)
        //             /   \ 
        //            /     \ 
        //           /       \                              // Data segment stores initialized static/global data !
        //          /         \                             // BSS Segment stores uninitialized static/global data !
        //    Data Segment     \ 
        //                      \ 
        //                   BSS Segment
        // 
        // * Stack --> grows in size alongside of the program's runtime ! --> LIFO rule applies here !
        // * Heap  --> grows in size when memory is allocated dynamically !
        // 
        // 
        // STACKKKKKKKKKKKKKKKK :-
        // STACKFRAME of a function contains parameters, variables, storage and etc of the function !
        // int thisVariableIsInTheStackframeOfMain is in the stackframe of main()
        // printf(), and all other functions will have their own stackframe !
        // when a function is done and has returned, it's stackframe also pops !
        // Stack and heap start their allocation from oppssite ends of the memory, when they meet, means, you've used most of your memory !
        // StackOverflow ( not talking about the website ) : When the space allocated for the stack by the compiler, gets exhausted,
        //                                                   the situation is called stackOverflow
        // 
        // int func(){
        //     func();
        // }
        // Running this func() function will result in a stackOverflow
        // 
        //
        // 
        // HEAPPPPPPPPPPPPPPPPP :-
        // There are lots of limitations of stacks like, you can't make efficient use of arrays in stacks !
        // Heap can be used flexibly by the programmer as their need !
        // "With Great Power Comes Great Responsibility !" --> replace "Power" with "Heap"
        // If Not Managed Correctly Heap Can Grow Infinitely ! Use With Caution !
        

    
    return 0;
}