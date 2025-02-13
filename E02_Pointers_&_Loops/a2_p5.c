/*
CH-230-A
a2 p5.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int main(){
    int a;
    printf("Please enter an integer value:\n");
    scanf("%d", &a);
    printf("The value you entered is %d\n", a);

    int *ptr_a; //declaring and initializing a pointer variable.
    ptr_a = &a;
    printf("The address of the value is %p\n", ptr_a);
    *ptr_a = *ptr_a + 5;
    printf("The value increased by 5 is:%d\n", *ptr_a);
    printf("The address of the modified value is %p\n", ptr_a);

    return 0;   
}

/*We can change the value at the particular address using the pointer. However the modified
value will also have the same address. */