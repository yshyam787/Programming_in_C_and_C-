/*
CH-230-A
a1 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
int main(){
    int x = 17, y = 4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    int result = x + y;
    printf("sum=%d\n", result);
    printf("product=%d\n", x * y);
    printf("difference=%d\n", x - y);
    double division = (double) x / (double) y; //converting variable of datatype int to double. 
    printf("division=%f\n", division);
    printf("remainder of division=%d\n", x%y);
}