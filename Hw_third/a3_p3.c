/*
CH-230-A
a3 p3.[c]
Shyam Yadavdd
s.yadav@jacobs-university.de
*/

#include<stdio.h>
//convert cm into km
float convert (int cm){
    float km = cm / 100000.0;
    return km;
}
int main(){
    int x;
    scanf("%d", &x);
    float y = convert(x);
    printf("Result of conversion: %f\n", y);
    return 0;
}


