/*
CH-230-A
a1 p3.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <stdio.h>
int main() {
    float result; /*The result of the division*/
    int a = 5;
    double b = 13.5;
    result = a / b;
    printf("The result is %f\n", result); 
    return 0;
}
/*The first is the obvious error which says that the variable "b" is assigned int data-type; however, it is given
the decimal or float value. Thus, it is fixed by assigning "double" data-type to the variable "b". 
The second error is that the printf function specifies or expect the integer result, however, the "result"
argument is of type float. Thus it is fixed by changing the specifier to float in printf function.*/