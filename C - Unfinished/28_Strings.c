#include<stdio.h>

int main(int argc, char const *argv[]){
    
    // String is not a datatype in C language !
    // String is a null terminated character array in C language !
    // Strings in C are expressed using an array of characters terminated by a null character '\0'
    // ASCII value of \0 is 00 ---> this null character terminates the string when used !
    // \0 is necessary in a string. The array should at least have 1 empty block for \0 at the end !
    // Min Length of char array sould be lengthOfStringStored + 1
    // \0 tells the compiler that the string ended just before the null character, excluding the null character from the string !
    // characters are declared using single quotes ''
    // strings are declared using double quotes ""
    // We can create STRINGS aka CHAR ARRAY in two of the following ways :-

    char name[] = {'h','a','r','r','y','\0'}; // in this method, null character is meant to be put manually to make it a valid string !
    puts(name);
    char namee[5] = "harry"; // however, in this method the double quotes tell the compiler to automatically insert \0, so its automatic !

    // char n[4] = "12345";
    // puts(n); //prints only till harr bcoz namee has only 4 blocks but we tried to access the 5th block ! this gives warning !

    // char wrong[5] = "hello"; // this is wrong bcoz "hello" itself acquires 5 blocks so there is no space for automatic addition of '\0' !

    // scanf can be used to input strings but gets() function from stdio.h library is used bcoz scanf cant input witespaces
    char input[10];
    gets(input); // \0 is added automatically in gets() function



    // Three of many methods to print a str in C :-

        /*1*/ printf("%s\n",input);

        /*2*/ puts(input); // puts() from the stdio.h library is used to print a string like printf

        /*3*/ for (int i = 0; input[i]!='\0'; i++){
                 printf("%c",input[i]);
              }
    

    puts("\nHello"); // puts() can also be used like this, it can be given a string directly like this ! 
    puts("\n%d %s"); // in puts() format specifiers are redundant and are printed as it is ! escape sequences work well in puts()


    char ab = getchar(); // getchar() from the stdio.h library is used to input a char
    putchar(ab); // putchar() from the stdio.h library is used to print a char
    
    return 0;
}