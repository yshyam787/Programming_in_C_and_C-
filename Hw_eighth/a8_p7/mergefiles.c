/*
CH-230-A
a8 p7.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    // char str1[1000];
    // char str2[1000];
    char ch1, ch2;
    FILE *fptr1 = fopen("text1.txt", "r");
    if (fptr1 == NULL) {
        printf("Error in opening first file!\n");
        exit(1);
    }

    FILE *fptr2 = fopen("text2.txt", "r");
    if (fptr2 == NULL) {
        printf("Error in opening second file!\n");
        exit(1);
    }

    FILE *mergefiles = fopen("merge12.txt", "w");
    if (mergefiles == NULL) {
        printf("Error in opening the output fle!\n");
        exit(1);
    }
    while ((ch1 = getc(fptr1)) != EOF) {
        fputc (ch1, mergefiles);
    }

    while ((ch2 = getc(fptr2)) != EOF) {
        fputc (ch2, mergefiles);
    }

    fclose (fptr1);
    fclose (fptr2);
    fclose (mergefiles);
    return 0;
}