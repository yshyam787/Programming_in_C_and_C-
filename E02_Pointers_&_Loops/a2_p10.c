/*
CH-230-A
a1 p10.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int main(){
    int n;
    printf("Please enter a positive and non-zero integer value:\n");
    int i = 1;
    scanf("%d", &n);

    /*Checking the initial condition to make sure that the entered number is a 
    positive and non-zero integer.*/
    while(n<0){
        printf("Please enter a positive and non-zero integer value:\n");
        int new_n;
        scanf("%d", &new_n);
        n = new_n;

    }

    if(n>0){
        while(i<=n){
            printf("%d day = %d hours\n", i, i*24);
            i++;
        }
    }

    return 0;
}