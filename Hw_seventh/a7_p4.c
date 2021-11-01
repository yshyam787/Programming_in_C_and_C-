/*
CH-230-A
a7 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void uppercase (char a[100]) {
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a' && a[i] <= 'z'){
            printf("%c", toupper(a[i]));
        }
        else {
            printf("%c", a[i]);
        }
    }
}
void lowercase (char b[100]) {
    for(int i = 0; b[i] != '\0'; i++) {
        if (b[i] >= 'A' && b[i] <= 'Z'){
            printf("%c", tolower(b[i]));
        }
        else {
            printf("%c", b[i]);
        }
    }
}
//function for reversing the case of characters. 
void lowerupper (char c[100]) {
    for (int i = 0; i < strlen(c); i++) {
        if (c[i] >= 'a' && c[i] <= 'z') {
            printf("%c", toupper(c[i]));
        }
        else if (c[i] >= 'A' && c[i] <= 'Z'){
            printf("%c", tolower(c[i]));
        }
        else {
            printf("%c", c[i]);
        }
    }
}

int main() {
    int choice;
    char string1[100];
    fgets(string1, sizeof(string1), stdin);
    void (*funcptr[3]) (char*) = {uppercase, lowercase, lowerupper};
    while (1) {
        scanf("%d", &choice);
        if (choice == 4) {
            exit(1);
        }
        else {
            (funcptr[choice - 1])(string1);
        }
    }
    return 0;
}