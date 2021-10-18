#include <stdio.h>
//defining macro for determining least significant bit. 
//checking the first position of the last element from the right if
//it is zero. 
#define LSBT(a) (a & 1) == 0 ? 0 : 1
int main(){
    unsigned char x;
    scanf("%c", &x);
   // unsigned char bit=x;
    printf("The decimal representation is: %d\n", x);
    printf("The least significant bit is: %d\n",LSBT (x)) ;
}