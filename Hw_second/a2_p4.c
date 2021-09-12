/*
CH-230-A
a2 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int main(){
    printf("Please enter the three float values for a, b and h:\n");
    double a, b, h;
    scanf("%lf %lf %lf", &a, &b, &h);
    printf("square area=%lf\n", a*a);
    printf("rectangle area=%lf\n", a*b);
    printf("tringle area=%lf\n", (b*h)/2);
    printf("trapeziod area=%lf\n", (a+b)/2*h);
    return 0;
}