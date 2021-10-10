/*
CH-230-A
a4 p11.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

//counting the occurance of characters.
int count_insensitive (char *str, char c){
    int count = 0;
    //converting the upper case of alphabets to lower case. 
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == c) {
            count ++;
        }
    }
    return count;
}
int main(){
    char ch[50];
    char c;
    printf("Enter the string:\n");
    fgets(ch, sizeof(ch), stdin);

    printf("Enter the character to be counted:\n");
    scanf("%c", &c);

    char *ptr;
    ptr = (char*) malloc (sizeof(strlen(ch)));
    if (ptr == NULL){
        printf("The memory was not allocated.\n");
    }
    for (int i = 0; ch[i] != '\0'; i++){
        //copying the string into the dynamically allocated memory. 
        ptr[i] = ch[i];
    }

    printf("The character '%c' occurs %d times.\n", c, count_insensitive(ptr, c));
    free(ptr);

    return 0;
}