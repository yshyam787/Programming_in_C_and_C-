/*
CH-230-A
a5 p7.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str1[100];
    char str2[100];
    char *concatenated;
    //getting strings. 
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    //removing the end of the line of the string 1. 
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] ='\0';
        }
    }
    
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n'){
            str2[i] = '\0';
        }
    }


    //string two is being concatenated to 1. 
    strcat(str1, str2);
    concatenated = (char*) malloc (sizeof(char) * (strlen(str1)));
    if (concatenated == NULL) {
        exit(1);
    }

    //copy string 1 to dynamically allocated memroy concatenated. 
    strcpy(concatenated, str1);

    printf("Result of concatenation: %s\n", concatenated);
    free (concatenated);

    return 0;

}