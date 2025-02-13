/*
CH-230-A
a5 p6.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int nonnegval(float *array, int n) {
    int count = 0;
    for (int i =  0; i < n; i++) {
        if (*(array + i) < 0) {
            count += i ;
            break;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    float *dyn_array;
    dyn_array = (float*) malloc (sizeof(float) * n);
    if (dyn_array == NULL) {
        printf("The memory was not allocated.\n");
    }
    for (int i = 0; i < n; i++) {
        scanf("%f", &dyn_array[i]);
    }

    printf("Before the first negative value: %d elements.\n", 
    nonnegval(dyn_array, n));

    free (dyn_array);
    return 0;
}
