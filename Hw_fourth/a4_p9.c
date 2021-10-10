/*
CH-230-A
a4 p9.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
//getting the product of minium and maximum elements in array. 
int prodminmax(int arr[], int n){
    int min, max;
    min = max = 0;
    //getting maximum
    for (int i =  0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
            min = max;
        }
    }
    //getting minimum
    for (int i = 0; i < n; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min * max;
}
int main(){
    int n;
    scanf("%d", &n);
    int *dyn_arry;
    //allocating dynamic memory for the array.
    dyn_arry = (int*) malloc (sizeof(int) * n);
    if (dyn_arry == NULL){
        printf("The memory was not allocated.\n");
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &dyn_arry[i]);
    }
    printf("The product of min and max is %d\n", prodminmax(dyn_arry, n));
    free (dyn_arry);

    return 0;
}