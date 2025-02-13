/*
CH-230-A
a5 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

//division by 5
void divby5 (float arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = arr[i] / 5.0;
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);
    float *dyn_array = (float*) malloc (sizeof(float) * n);
    if (dyn_array == NULL){
        printf("The memory was not allocated.\n");
    }
    for (int i = 0; i < n; i++){
        scanf("%f", &dyn_array[i]);
    }

    printf("Before:\n");
    for (int i = 0; i<n; i++){
        printf("%.3f ", dyn_array[i]);
    }

    printf("\nAfter:\n");
    divby5(dyn_array, n);
    free(dyn_array);

    return 0;
}