#include<stdio.h>
int main()
{
    //DATA TYPES and FORMAT SPECIFIER
        /* printf() function is used to print any output.
            1. int type: Integers- %d
            2. double type: floating point numbers with decimal- %lf
            3. float type: float numbers- %f
            4. char type: used in single quotation- %c
        */

       int age;
       int price;
       age=21;  
       price=25.55;    
       printf("Age= %d\n", age);
       printf("Price= %d", price); //as you can see here, although I gave an input of float nunmber but output is an Integer; because of the format specifier
       return 0;
}