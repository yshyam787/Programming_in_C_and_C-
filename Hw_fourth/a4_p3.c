/*
CH-230-A
a4 p3.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

//calculating geometric mean.
float geometric_mean (float arr[], int num) {
    float product = 1;
    for (int i = 0; i < num; i++){
        product = product * arr[i];
    }
    
    float gmean = pow(product, 1/15.0);
    return gmean;
}

//Determining highest element in the array.
float highest_elem(float arr[], int num){
    float max = 0;
    for (int i = 0; i < num; i++){
        if (max < arr[i]){
            max = arr[i];
        }
        else {
            max = max;
        }
    }
    return max;
}

//Determining the smallest number
float lowest_elem(float arr[], int num) {
    float min = arr[0];
    for (int i = 0; i < num; i++){
        if (min > arr[i]) {
            min = arr[i];
        }
        else {
            min = min;
        }
    }
    return min;
}

//Determines the sum
float sum(float arr[], int num) {
    float sum_elem = 0;
    for (int i = 0; i < num; i++){
        sum_elem += arr[i];
    }
    return sum_elem;
}

int main(){
    float array[15];
    float x;
    //storing positive elements of array.
    for (int i = 0; i <15; i++) {
        scanf("%f", &x);
        if (x < 0){ //restricting to store positive values. 
            break;
        }
        else {
            array[i] = x;
        }
    }

    printf("Please enter a character for operation:\n");
    //to read only one character.
    getchar();
    char c;
    scanf("%c", &c);

    //perfoming different operations.
    switch (c)
    {
    case 'm':
        printf("The geometric mean is: %f\n", geometric_mean(array, 15));
        break;
    
    case 'h':
        printf("Highest number: %lf\n", highest_elem(array, 15));
        break;

    case 'l':
        printf("Smallest number: %lf\n", lowest_elem(array, 15));
        break;

    case 's':
        printf("Sum: %lf\n", sum(array, 15));
        break;

    default:
        printf("Invalid character was entered.\n");
        break;
    }

    return 0;


}