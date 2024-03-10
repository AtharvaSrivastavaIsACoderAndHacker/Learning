#include<stdio.h>

int main(int argc, char const *argv[]){

    // TYPECASTING

    // int i = 10;
    // float ii = (float)i;
    // double d = (double)i;

    // printf("Int %d\n", i);   
    // printf("Float %f\n", ii);   
    // printf("Double %lf\n", d);   








    // TYPECONVERSION IN C
    float a = 55/13;
    printf("a = %f\n", a); // output == 4.00000 -- Why ? 
    //because in c,operations between ints are closed to ints only, even division of 2 ints will result in an int which is not true in real life

    float aa = (float)55/13;
    printf("a = %f\n", aa); // output == 4.230769 because now, float / int will result in a float
    
    // int and int = int
    // float and int = float
    // float and float = float

    
    
    return 0;
}