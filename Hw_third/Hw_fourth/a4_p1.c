/*
CH-230-A
a4 p1.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

double area(double x){
    return 22.0 / 7 * x* x;
}

double perimeter(double x){
    return 2.0 * 22 /7 * x;
}

int main(){
    double lwr_lmt, upr_lmt, stp_size;
    scanf("%lf %lf %lf", &lwr_lmt,  &upr_lmt, &stp_size);
    //counting the number of elements to be printed out.
    int item_num = (upr_lmt - lwr_lmt) / stp_size;
    printf("%d\n", item_num);

    //getting tables. 
    for (int i = 0; i <= item_num; i++){
        printf("%lf %lf %lf\n", lwr_lmt, area(lwr_lmt), perimeter(lwr_lmt));
        lwr_lmt += stp_size;
    }

    return 0;
}