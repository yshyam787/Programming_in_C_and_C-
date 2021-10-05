/*
CH-230-A
a5 p2.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

//division by 5
void divby5 (float arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = arr[i] / 5.0;
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}

int main(){
    float array[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    printf("Before:\n");
    for (int i = 0; i<6; i++){
        printf("%.3f ", array[i]);
    }

    printf("\nAfter:\n");
    divby5(array, 6);

    return 0;
}