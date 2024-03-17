#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]){
    
    // In ASCII, each character is represented using 7 bits
    // strcat() for concatenation
    // strlen() returns length of the string excluding the null character - \0
    // strrev() gives reversed string
    // strcpy() copies one string into another
    // strcmp() compares two strings and returns an integer value, 0 if both strings are same
    // strchr() returns a pointer pointing the 1st character of the found searchTerm in string otherwise a null pointer finds1stOccurence
    // strcoll() performs comparison based on the rules of the current locale’s LC_COLLATE category.
    // strcspn() returns int value of no. of characters before the first occurence os a given string in the main string

    char str1[50];
    gets(str1);
    char str2[50];
    gets(str2);


    printf("------------------------------------------------------------------------\n");
    printf("%s %s --> concatenated string is now stored in str1\n",strcat(str1,str2),str1);


    printf("------------------------------------------------------------------------\n");
    printf("Len of str1 is %d --  %s\n",strlen(str1),str1);

    
    printf("------------------------------------------------------------------------\n");
    printf("%s %s --> str1 now has reversed string\n",strrev(str1),str1);


    printf("------------------------------------------------------------------------\n");
    printf("%s %s --> str2 is copied to str1\n",strcpy(str1,str2),str1);

    
    printf("------------------------------------------------------------------------\n");
    printf("%d\n",strcmp("Hb","Ha")); // if 1st unmatched char in str2 comes early in alphabetic order that that of str1, then int=positive
    printf("%d\n",strcmp("A","B")); // if 1st unmatched char in str1 comes early in alphabetic order that that of str2, then int=negative
    printf("%d\n",strcmp("hellooh","hiii")); // if 1st unmatched char in str1 comes early in alphabetic order that that of str2, then int=negative




    // // QuickQuiz
    // char name1[50];
    // gets(name1);
    // char name2[50];
    // gets(name2);
    // char str[] = " is friend of ";        
    // puts(strcat(name1,strcat(str,name2)));
    
    return 0;
}