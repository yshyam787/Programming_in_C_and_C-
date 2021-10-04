/*
CH-230-A
a4 p2.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
int main(){
    char string[50];
    fgets(string, sizeof(string), stdin);
    //ldfj lsdkjf lkjdsf ljsdf ljsf lsjdfljlsdfj lskjfl sjdfl lsdjfsl 

    //printing zigzag word.
    for (int i = 0; i < strlen(string); i++){
        printf("%c\n", string[i]);
        printf(" %c\n", string[i+1]);
        i += 1;
    }
    return 0;
}