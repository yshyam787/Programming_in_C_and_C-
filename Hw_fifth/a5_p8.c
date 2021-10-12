/*
CH-230-A
a5 p8.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

//reading matrix.
void readmatrix(int **arr, int numrow, int numcol) {
    int elem;
    for (int i = 0; i <  numrow; i++) {
        for (int j = 0; j < numcol; j++) {
            scanf("%d", &elem);
            arr[i][j] = elem;
        }
    }
}

//printing matrix.
void printmatrix(int **arr, int numrow, int numcol) {
    for (int i = 0; i < numrow; i++) {
        for (int j = 0; j < numcol; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

//multiplying matrix A and B.
void matrixprod(int **table1, int **table2, int **resulttable, int row, int col, int commonrowcol) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < commonrowcol; k++){
                sum += table1[i][k] * table2[k][j];
            }
            resulttable[i][j] = sum;
            sum = 0;
            printf("%d ", resulttable[i][j]);
        }
        printf("\n");
    }
}

int main () {
    int **table1, **table2, **resulttable;
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    //allocating dynamic memory for table 1. 
    table1 = (int**) malloc (sizeof(int*) * n );
    if (table1 == NULL){
        exit(1);
    } 
    for (int i = 0; i < n; i++) {
        table1[i] = (int*) malloc (sizeof(int) * m);
        if (table1[i] == NULL) {
            exit(1);
        }
    }

    //allocating dynamic memory for table 2.
    table2 = (int**) malloc (sizeof(int*) * m);
    if(table2 == NULL) {
        exit(1);
    }
    for (int i = 0; i < m; i++){
        table2[i] = (int*) malloc (sizeof(int) * p);
        if (table2[i] == NULL) {
            exit(1);
        }
    }

    //allocating dynamic memory for table 3 (result).
    resulttable = (int**) malloc (sizeof(int*) * n);
    if(table2 == NULL) {
        exit(1);
    }
    for (int i = 0; i < m; i++){
        resulttable[i] = (int*) malloc (sizeof(int) * p);
        if (resulttable[i] == NULL) {
            exit(1);
        }
    }

    //reading and storing matrix value in dynamic memory.
    readmatrix(table1, n, m);
    readmatrix(table2, m, p);

    //printing matrix.
    printf("Matrix A:\n");
    printmatrix(table1, m, n);
    printf("Matrix B:\n");
    printmatrix(table2, n, p);

    //getting the product of matrix.
    printf("The multiplication result AxB:\n");
    matrixprod(table1, table2, resulttable, n, p, m);

    //freeing memory for first matrix.
    for (int i = 0; i < n; i++) {
        free(table1[i]);
    }
    free (table1);

    //freeing memory for second matrix.
    for (int i = 0; i < m; i++) {
        free(table2[i]);
    }
    free (table2);

    //freeing memory for third matrix.
    for (int i = 0; i < p; i++) {
        free(resulttable[i]);
    }
    free (resulttable);

    return 0;
}