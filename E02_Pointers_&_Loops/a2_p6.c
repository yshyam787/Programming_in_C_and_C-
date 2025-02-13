/*
CH-230-A
a1 p6.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int main(){
    double x,y;
    printf("Please enter two double variables:\n");
    scanf("%lf %lf", &x, &y);

    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("The address of first pointer pointing to first value = %p\n", ptr_one);
    printf("The address of second pointer pointing to first value = %p\n", ptr_two);
    printf("The address of third pointer pointing to second value = %p\n", ptr_three);
    
    return 0;
}