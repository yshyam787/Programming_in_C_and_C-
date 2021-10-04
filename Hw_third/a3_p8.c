/*
CH-230-A
a3 p8.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

//sum of the elements of the array.
float sum(float rand_array[], int dim){
    float new_sum = 0;
    for (int i = 0; i<dim; i++){
        new_sum += rand_array[i];
    }
    return new_sum;
}

//average of elements in array.
float average(float any_array[], int dim){
    float avg = 0;
    float sum_array =  0;
    for (int i = 0; i < dim; i++){
        sum_array += any_array[i];
        avg =  sum_array / dim;
    }
    return avg;
}

int main(){
    float array[10];
    float x;
    for (int i = 0; i < 10; i++){
        scanf("%f", &x);
        if (x != -99.0){
            array[i] = x;
        }
        else {
            break; //to break the loop if -99.0 is read.
        }
    }
    printf("Sum of the values = %f\n", sum(array, 10));
    printf("Avergae of the values = %f\n", average(array, 10));
    return 0;
}