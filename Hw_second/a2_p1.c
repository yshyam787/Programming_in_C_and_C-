/*
CH-230-A
a2 p1.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
int main(){
    double x,y;
    printf("Please enter a double number:\n");
    scanf("%lf",&x);
    printf("Please enter another double number:\n");
    scanf("%lf", &y);
    printf("sum of doubles=%lf\n", x+y);
    printf("difference of doubles=%lf\n", x-y);
    printf("square=%lf\n",x*x);

    int u,v;
    printf("Please enter two integers\n");
    scanf("%d %d", &u, &v);
    printf("sum of integers=%d\n", u+v);
    printf("prodcut of integers=%d\n", u*v);

    
    char c,d;
    printf("Please a character:\n");
    getchar();
    scanf("%c", &c);
    printf("Please enter another character:\n");
    getchar();
    scanf("%c",&d);
    printf("sum of chars=%d\n", c+d);
    printf("product of chars=%d\n",c*d);
    printf("sum of chars=%c\n", c+d);   
    printf("product of chars=%c\n", c*d);
    return 0;
}