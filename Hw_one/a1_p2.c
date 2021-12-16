/*
CH-230-A
a1 p2.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <stdio.h>
int main() {
    int result; /*The result of our calculation*/
    result=(2+7)*9/3; 
    printf("The result is %d\n", result); 
    return 0;
}   

/*In the given program we are expecting the integer result, however the argument was not provided in the printf function. Therefore,the compiler was giving us the garbage integer result. It was fixed by prividing the suitable argument "result" in the printf function.*/
