#include<stdio.h>

int main(int argc, char const *argv[]){


    printf("4 = %d\n",22-18); 

    float a = 69.696969;
    printf("a = %f\n",a);
    
    float b = 420.420420420420;
    printf("b = %0.3f\n",b);

    float c = 1.234567;
    printf("c = %20.3f\n",c); // 20 characters offset is given over here => 20.3 means to print float c ith 3 decimal places using 20 characters space

    float d = 1.234567;
    printf("d = %-20.3f ||||",d);


/*

%d or %i    It is used to print the signed integer value where signed integer means that the variable can hold both positive and negative values.
%u	        It is used to print the unsigned integer value where the unsigned integer means that the variable can hold only positive value.
%o	        It is used to print the octal unsigned integer where octal integer value always starts with a 0 value.
%x	        It is used to print the hexadecimal unsigned integer where the hexadecimal integer value always starts with a 0x value. In this, alphabetical characters are printed in small letters such as a, b, c, etc.
%X	        It is used to print the hexadecimal unsigned integer, but %X prints the alphabetical characters in uppercase such as A, B, C, etc.
%f	        It is used for printing the decimal floating-point values. By default, it prints the 6 values after '.'.
%e/%E	    It is used for scientific notation. It is also known as Mantissa or Exponent.
%g	        It is used to print the decimal floating-point values, and it uses the fixed precision, i.e., the value after the decimal in input would be exactly the same as the value in the output.
%p	        It is used to print the address in a hexadecimal pointer form.
%c	        Char
%s	        It is used to print the strings.
%l	        Long
%lf         Double
%Lf         Long Double

*/
    
    return 0;
}