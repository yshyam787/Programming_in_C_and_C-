/*
CH-230-A
a6 p3.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
//determining max and min through macros.
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
#define MIDRANGE(A, B) (((A) + (B)) / 2)
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float max = MAX(a, MAX(b, c));
    float min = MIN(a, MIN(b, c));
    float midrange = MIDRANGE (max, min);
    printf("The mid-range is: %6f\n", midrange);
    return 0;
}