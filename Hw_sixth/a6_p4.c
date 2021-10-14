/*
CH-230-A
a6 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

//defining macros.
#define INTERMEDIATE

int main() {
    int n, *array1, *array2, *intmdval, product = 0;
    scanf("%d", &n);
    //allocating memory for the inputs and results. 
    array1 = (int*) malloc (sizeof(int*) * n);
    array2 = (int*) malloc (sizeof(int*) * n);
    intmdval = (int*) malloc (sizeof(int*) * n);

    //checking if the memory are allocated. 
    if (array1 == NULL) {
        exit(1);
    }
    if (array2 == NULL) {
        exit(1);
    }

    //storing the inputs into allocated memory.
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }
    for (int j = 0; j < n; j ++) {
        scanf("%d", &array2[j]);
    }
    
    //checking if INTERMEDIATE is defined and printing 
    // the corresponding result
    #if defined(INTERMEDIATE) 
        printf("The intermediate product values are:\n");
        for (int i = 0; i < n; i++) {
            intmdval[i] = array1[i] * array2[i];
            printf("%d\n", intmdval[i]);
            product += intmdval[i];
        }
        printf("The scalar product is: %d\n", product);
    #else 
        for (int i = 0; i < n; i++) {
            product =  product + (array1[i] * array2[i]);
        }
        printf("The scalar product is:%d\n", product);

    #endif

    //freeing the allocated memory.
    free (array1);
    free (array2);
    free (intmdval);
    return 0;
}