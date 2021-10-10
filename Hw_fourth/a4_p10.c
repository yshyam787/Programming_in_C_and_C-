/*
CH-230-A
a4 p10.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
    //printf("%f %f %f %f\n", *prod, *div, *pwr, *invb);
}
int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float prod;
    float div;
    float pwr;
    float invb;
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("%f %f %f %f\n", prod, div, pwr, invb);

    return 0;
}