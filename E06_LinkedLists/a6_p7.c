/*
CH-230-A
a6 p7.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
void set3bits (char c, int pos1, int pos2, int pos3) {
    int variable;
    for (int i = 7; i >= 0; i--) {
        if ( i == pos1) {
            printf("1");
        }
        else if (i == pos2) {
            printf("1");
        }

        else if (i == pos3) {
            printf("1");
        }

        else {
            //right shifting the variale by ith times.
            variable = c >> i;
            //if the last digit is one, print 1 else 0.
            if (variable & 1) {
                printf("1");
            }
            else {
                printf("0");
            }
        }

    }
    printf("\n");
}
int main() {
    char c;
    int variable;
    int d, e, f;
    scanf("%c %d %d %d", &c, &d, &e, &f);
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");

    for (int i = 7; i >= 0; i--) {
        //getting the first element, and second, and so on.
        variable = c >> i;
        if (variable & 1) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    
    printf("\nAfter setting the bits: ");
    set3bits( c, d, e, f);
    return 0;
}