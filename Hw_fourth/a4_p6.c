/*
CH-230-A
a4 p5.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

//finding two greatest values. 
void grtst_val(int *array_ptr, int dim){
    int max1, max2;
    max1 = max2 = 0;
    for (int i = 0; i < dim; i++){
        if (max1 <= array_ptr[i]){
            //storing one value lesser. 
            max2 = max1;
            max1 = array_ptr[i];
        }
    }
    
    // for (int i  = 0; i < dim; i++){
    //     if ((max1 > array_ptr[i]) && (max2 < array_ptr[i])){
    //         max2 = array_ptr[i];
    //     }
    // }
    printf("Max value = %d\n", max1);
    printf("Second max = %d\n", max2);
}

int main(){
    int n;
    int value;
    scanf("%d", &n);
    int *dynamic_array;
    //allocating memory for array
    dynamic_array = (int*) malloc (sizeof(int) * n);
    if (dynamic_array == NULL){
        exit(1); //true
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &value);
        dynamic_array[i] = value;  
    }

    grtst_val(dynamic_array, n);
    //freeing the dynamically allocated memory. 
    free(dynamic_array);

    return 0;
}

