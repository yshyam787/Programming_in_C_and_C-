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
    
    //preventing from reading new lines. 
    for (int i = 0; i <= strlen(string); i++){
        if (string[i] == '\n'){
            string[i] = '\0';
        }
    }

    //printing zigzag word.
    for (int i = 0; i < strlen(string); i++){
        if (i % 2 == 0){
            printf("%c\n", string[i]);
        }
        else {
            printf(" %c\n", string[i]);
        }
    }
    return 0;
}