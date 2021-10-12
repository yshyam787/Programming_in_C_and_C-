/*
CH-230-A
a5 p11.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int globalchk;

int ifprime(long unsigned v, int globalchk){
    //if divisor is 1, loop stops and returns 1.
    if (globalchk == 1){
        return 1;
    }
    else {
        if (v % (globalchk) == 0) {
            //not a prime number and returns 0.
            return 0;
        }
        else {
            return ifprime(v, globalchk - 1);
        }
    }
}

int main(){
    long unsigned x;
    int result;
    scanf("%lu", &x);
    globalchk = x / 2;
    if (x == 1){
        result  = 0;
    }
    else {
        result = ifprime(x, globalchk);
    }
    
    if (result == 1){
        printf("%lu is prime\n", x);
    }
    else {
        printf("%lu is not prime\n", x);
    }
    
    return 0;
}