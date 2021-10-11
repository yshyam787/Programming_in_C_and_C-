/*
CH-230-A
a5 p5.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

//getting the scalar product of the vectors. 
double vect_prod(double *arr1, double *arr2, int n){
    double summation = 0.0;
    for (int i = 0; i < n; i++) {
        summation  = summation + (arr1[i] * arr2[i]);
    }
    return summation;
}

void getmaxmin(double *v1, double *v2, int n) {
    double max1, min1, max2, min2;
    int posmax1, posmin1, posmax2, posmin2;
    max1 = min1 = max2 = min2 = 0.0;
    posmax1 = posmin1 = posmax2 = posmin2 =  0;
    for (int i = 0; i < n; i++) {
        if (max1 < v1[i]){
            max1 = v1[i];
            posmax1 = i;
            min1 = max1;
        }
        if (max2 < v2[i]) {
            max2 = v2[i];
            posmax2 = i;
            min2 = max2;
        }
    }

    for (int i = 0; i < n; i++) {
        if (min1 > v1[i]) {
            min1 = v1[i];
            posmin1 = i;
        }
        if (min2 > v2[i]) {
            min2 = v2[i];
            posmin2 = i;
        }
    }

    printf("The smallest = %lf\n", min1);
    printf("Position of smallest = %d\n", posmin1);
    printf("The largest = %lf\n", max1);
    printf("Position of largest = %d\n", posmax1);
    printf("The smallest = %lf\n", min2);
    printf("Position of smallest = %d\n", posmin2);
    printf("The largest = %lf\n", max2);
    printf("Position of largest = %d\n", posmax2);
}
int main(){
    int n;
    double *v, *w;
    scanf("%d", &n);
    v = (double*) malloc (sizeof(double) * n);
    if (v == NULL){
        exit(1);
    }

    w = (double*) malloc (sizeof(double) * n);
    if (w == NULL) {
        exit(1);
    }

    for (int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }

    for (int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }

    printf("Scalar product=%lf\n", vect_prod(v, w, n));
    getmaxmin(v, w, n);
    free(v);
    free(w);
    return 0;
}