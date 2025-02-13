/*
CH-230-A
a3 p1.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int main(){
    float x;
    int n;
    int i = 0;
    scanf("%f%d", &x, &n);


    while (n<=0){
        printf("Input is invalid, reenter value\n");
        int new_n;
        scanf("%d", &new_n);
        n = new_n;
        }

    if(n>0){
        while(i<n){
            printf("%f\n", x);
            i++;
        }
    }

    return 0;
}