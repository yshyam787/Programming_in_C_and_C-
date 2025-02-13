/*
CH-230-A
a6 p6.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

int main() {
    unsigned char c;
    int variable;
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    //iterating through every bits untill 8 positions. 
    for (int i = 7; i >= 0; i--) {
        //shiting the bits of character right by i and storing 
        //the remaining value in variable. i.e getting first value.
        variable = c >> i;
        //checking last bit and printing corresponding result.
        if (variable & 1) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}