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
    int j=0;
    scanf("%d", &n);

    if(n<0){
        while(j){
            printf("Please enter a positive and non-zero integer value\n");
            scanf("%d", &n);
            j++;
        }
    }
    if(n>0){
        while(i<=n){
            printf("%d day = %d hours\n", i, i*24);
            i++;
        }
    }

    return 0;
}