/*
CH-230-A
a3 p6.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>

float to_pounds (int kg, int g){
    float pounds = (kg + g / 1000.0) * 2.2;
    return pounds;
}

int main(){
    int m1;
    int m2;
    scanf("%d %d", &m1, &m2);
    
    printf("Result of conversion: %lf\n", to_pounds(m1, m2));

    return 0;
}
/*Be careful with the floats, doubles and long floats. 
Always put the .0 after those numbers.*/

