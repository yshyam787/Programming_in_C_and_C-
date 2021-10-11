/*
CH-230-A
a5 p10.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

//counting down the numbers. 
void countdown( long unsigned n) {
    if (n == 0) {
        exit(1);
    }
    printf("%lu\n", n);
    //calling the function recursively.
    countdown(n -1);
}
int main(){
    long unsigned n;
    scanf("%lu", &n);
    countdown(n);
    return 0;
}