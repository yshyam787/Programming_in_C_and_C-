/*
CH-230-A
a3 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <stdio.h>

//get the position of character in a string.
int position(char str[], char c){
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
        /* do nothing */
    }
    return idx; //the braccket was missing in for loop.
}

int main() {
    char line[80];
    
    //while loop is removed to prevent infite loop
        printf("Enter string:\n"); 
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));

    return 0;
}