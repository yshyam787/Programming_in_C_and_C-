/*
CH-230-A
a2 p3.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
int main(){
    int w,d,h;
    printf("Please enter the number of weeks:\n");
    scanf("%d", &w);
    printf("Please enter the number of days:\n");
    scanf("%d", &d);
    printf("Please enter the number of hours:\n");
    scanf("%d", &h);
    int total_hours = (w*7+d)*24+h;
    printf("Total number of hours = %d\n", total_hours);
    return 0;
}