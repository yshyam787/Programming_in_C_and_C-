/*
CH-230-A
a8 p5.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    char ch1, ch2;
    FILE *fptr1 = fopen("chars.txt", "r");
    FILE *fptr2 = fopen("codesum.txt", "w");
    if (fptr1 == NULL) {
        printf("Some error occurred while opening input file!\n");
        exit(1);
    }
    if (fptr2 == NULL) {
        printf("Some error occurred while opening output file!\n");
        exit(1);
    }
    ch1 = getc(fptr1);
    ch2 = getc(fptr1);
    int sum = ch1 + ch2;
    fprintf(fptr2, "%d", sum);
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}