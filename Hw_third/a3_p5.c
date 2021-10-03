/*
CH-230-A
a3 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
int main(){
    char c;
    int n;
    printf("Please enter a character for operation\n");
    scanf("%c", &c);
    int idx = 1;
    printf("Please enter a number:\n");
    scanf("%d", &n);

    /*for looping around 'n' number of temperatures and 
    storing them into the arrays.*/
    for(idx; idx<=n; idx++){
        printf("Please enter the temperature\n");
        printf("%d.\n", idx);
        int tempr;
        scanf("%d", &tempr);
        int temp_array[100] = tempr;
    }
    printf("temperatures are:%d\n",temp_array[100]);
    return 0;
}