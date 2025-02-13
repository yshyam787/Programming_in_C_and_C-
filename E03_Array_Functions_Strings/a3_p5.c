/*
CH-230-A
a3 p5.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>

int main(){
    char c;
    int n;
    printf("Please enter a character for operation\n");
    scanf("%c", &c);
    printf("Please enter a value for number of temperature:\n");
    scanf("%d", &n);

    /*for looping around 'n' number of temperatures and 
    storing them into the arrays.*/
    int idx;
    double tempr_array[100];
    for(idx = 0; idx<n; idx++){
        printf("Please enter the temperature:\n");
        printf("%d:", idx);
        double tempr;
        scanf("%lf", &tempr);
        tempr_array[idx] = tempr;
    }

        // //checking if the array of the tempr. is stored.
    // for (int j = 0; j < n; j++){
    //     printf("%lf\n", tempr_array[j]);
    // }

    switch (c)
    {
    case 's':
        printf("The sum of temperatures is:\n");
        double total_tempr = 0;
        for (int i = 0; i<n; i++){
            total_tempr += tempr_array[i];
        }
        printf("%lf\n", total_tempr);
        break;

    case 'p':
        printf("The list of temperatures are:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%lf\n", tempr_array[i]);
        }
        break;

    case 't':
        printf("Temperatures in Fahrenheit are;\n");
        for (int i = 0; i < n; i++)
        {
            tempr_array[i] = 9/5 * tempr_array[i] + 32;
            printf("%lf\n", tempr_array[i]);
        }
        
    default:
        printf("Invalid character was entered.\n");
        break;
    }

    return 0;
}