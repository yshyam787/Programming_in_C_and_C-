/*
CH-230-A
a2 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int main(){
    //printf("Please enter the three float values for a, b and h:\n");
    float a, b, h;
    scanf("%f %f %f", &a, &b, &h);
    printf("square area=%f\n", a*a);
    printf("rectangle area=%f\n", a*b);
    printf("triangle area=%f\n", (a*h)/2);
    printf("trapezoid area=%f\n", (a+b)/2*h);
    return 0;
}