/*
CH-230-A
a2 p1.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
int main(){
    double x,y;
    scanf("%lf",&x);
    scanf("%lf", &y);

    int u,v;
    scanf("%d %d", &u, &v);
    
    char c,d;
    //printf("Please a character:\n");
    getchar();//To read only one character and avoid from reading spaces and back_spaces.
    scanf("%c", &c);
    //printf("Please enter another character:\n");
    getchar();
    scanf("%c",&d);

    printf("sum of doubles=%lf\n", x+y);
    printf("difference of doubles=%lf\n", x-y);
    printf("square=%lf\n",x*x);
    printf("sum of integers=%d\n", u+v);
    printf("product of integers=%d\n", u*v);
    printf("sum of chars=%d\n", c+d);
    printf("product of chars=%d\n",c*d);
    printf("sum of chars=%c\n", c+d);   
    printf("product of chars=%c\n", c*d);

    return 0;
}