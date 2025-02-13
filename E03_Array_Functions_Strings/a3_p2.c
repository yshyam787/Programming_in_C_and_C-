/*
CH-230-A
a3 p2.[c]
Shyam Yadavdd
s.yadav@jacobs-university.de
*/
#include<stdio.h>
int main(){
    char ch;
    int n;
    printf("Please enter a lowercase character:\n");
    scanf("%c", &ch);

    printf("Please enter an integer:\n");
    scanf("%d", &n);

    // int i = 1;
    // while(i<=n){
    //     printf("The character is: %c\n", ch-i);
    //     i++;
    // }

    for(int i = 1; i<=n; i++){
        printf("The character is: %c\n", ch-i);
    }

    return 0;
}