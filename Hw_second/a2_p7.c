/*
CH-230-A
a1 p7.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
int main(){
    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i);
        i--;
    }

    printf("That’s it.\n");

    return 0;
}
/*If there are more than one statements in the loop, it must be enlosed withing the braces
so that all the conditions inside the braces are executed at one, and the loops repeats again.*/