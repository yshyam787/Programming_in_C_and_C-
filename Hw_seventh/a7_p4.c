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
void (*func) (char[]);
void uppercase (char a[]) {
    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = toupper(a[i]);   
        printf("%c", a[i]); 
    }
}
int main() {
    char ch;
    char string1[100];
    fgets(string1, sizeof(string1), stdin);
    getchar();
    scanf("%c", &ch);
    while (ch != '4') {
        func = &uppercase;
        func(string1);
//..............................................
    }
    return 0;
}