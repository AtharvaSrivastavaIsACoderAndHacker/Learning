#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    
    // Heap should always be freed, warna uski aatma tujhe hamesha satayegi !
    // It is when a programmer allocates memory dynamically and forgets to free it's soul !
    // Python and Java have Garbage collectors which free idiotically allocated memory automaticaly, but C doesn't have one, se free the memory!
    
    int i = 0;
    int *ptr;
    while (1){
        ptr = malloc(100000);               // A Simulated Memory Leak
        if (i%100 == 0){                    // Run it without this constraint if u got balls !
            getchar();  
        }
        i++;
        // free(ptr);                       // the solution to this mess, but i'd rather let it be commmented to let it be messy !
    }
   
    return 0;
}