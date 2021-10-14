/*
CH-230-A
a6 p5.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

int main() {
    unsigned char c;
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");

    while (c) {
        if (c & 1) {
            printf("1");
        }
        else {
            printf("0");
        }
        //right shiting the bits by 1 position thus, the last 
        //element becomes the first, hence, reverse the order.
        c >>= 1;
    }
    printf("\n");
    return 0;
}