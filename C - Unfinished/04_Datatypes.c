#include<stdio.h>

int main(int argc, char const *argv[]){
    
    /*
      To get a diagram of all datatypes in c, click the link below coz i cant type thats too much.
      https://media.geeksforgeeks.org/wp-content/uploads/20220808115138/DatatypesInC.jpg


      Datatypes size in 32 bit architecture ----------
      https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQCVK71iAkOOsThgePFBeNnqWQYgKMbPT_MNczdl5rq0OsJOsQBd7HMWnNUFAaB11Llmvk&usqp=CAU
      




      Mine is 64 bit architecture so, mine will be 2x the size in 32 bit architecture 

    */

    printf("Int - %d bytes",sizeof(int)); // ---------------> see in 64 bit architecture, (sizeof(int) == 4) = True
    
    return 0;
}