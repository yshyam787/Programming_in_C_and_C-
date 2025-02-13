/*
CH-230-A
a8 p6.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char file1[100];
    char file2[100];
    double value1 = 0.0;
    double value2 = 0.0;
    printf("Please enter the name of first file:\n");
    scanf("%s", file1);
    printf("Please enter the name of second file:\n");
    scanf("%s", file2);
    FILE *fptr1 = fopen(file1, "r");
    if(fptr1 == NULL) {
        printf("Error in opening first file!\n");
        exit(1);
    }       

    FILE *fptr2 = fopen(file2, "r");
    if(fptr2 == NULL) {
        printf("Error in opening second file!\n");
    }

    FILE *fptr3 = fopen("results.txt", "w");
    if(fptr3 == NULL) {
        printf("Error in opening the output file!\n");
    }
    fscanf(fptr1, "%lf", &value1);
    fscanf (fptr2, "%lf", &value2);
    double sum = value1 + value2;
    fprintf(fptr3, "sum = %lf", sum);
    fprintf(fptr3,"\ndifference = %lf", value1 - value2);
    fprintf(fptr3, "\nproduct = %lf", value1 * value2);
    fprintf(fptr3, "\ndivision = %lf", value1 / value2);
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}