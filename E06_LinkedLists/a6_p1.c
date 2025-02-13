/*
CH-230-A
a5 p10.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#define SWAP( x, y, datatype) {datatype temp = x ; x = y ; y = temp ;}
int main() {
    int a, b;
    double c, d;
    scanf ("%d %d %lf %lf", &a, &b, &c, &d);
    SWAP(a, b, int);
    SWAP(c, d, double); 
    printf("After swapping:\n");
    printf("%d\n%d\n", a, b);
    printf("%.6lf\n%.6lf\n", c, d);

    return 0;
}

