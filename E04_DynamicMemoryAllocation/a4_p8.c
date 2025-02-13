/*
CH-230-A
a4 p8.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

//determing the bounds for compile time. 
#define ROW 30
#define COL 30

void matrix_printing(int array[ROW][COL], int dim){
    //array[dim][dim];
    printf("The entered matrix is:\n");
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            printf("%d ", array[i][j]);
            }
            printf("\n");
        }

    //printing the main diagonal    
    printf("Under the secondary diagonal:\n");
    for (int i = 0; i < dim; i++){
        for (int j = dim - i; j < dim; j++){
            printf("%d ", array[i][j]);
        }
    }
    printf("\n");
}


int main(){
    //Two dimensional array of 30 rows and 30 columns.
    int n;
    scanf("%d", &n);
    int matrix [ROW][COL];

    for (int  i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    matrix_printing(matrix, n);


    return 0;
}
/* This problem can also be solved by dynamically allocating the memory. */