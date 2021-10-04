/*
CH-230-A
a3 p9.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

//adding the value at position 2 and 5.
double sum25(double v[], int n){
    double sum = 0;
    if ((v[2] == -1) || (v[5] == -1)){
        return -111;
    }
    else {
        sum = v[2] + v[5];
        return sum;
    }
}

int main(){
    int n;
    double m;
    scanf("%d", &n);

    //preventing the value of n from being greater than 20.
    while(n > 20){
        int new_n;
        scanf("%d", &new_n);
        n = new_n;
    }

    double array[20];

    //initializing the array for comparison and using it later on. 
    for (int i = 0; i<n; i++){
        array[i] =  -1.0;
    }
    for (int i =  0; i < n; i++){
        if (n<20){ //making sure number of elements is below 20. 
            scanf("%lf", &m);
            array[i] = m;
        }
    }

    double final_sum = sum25(array, n);
    if(final_sum == -111){
        printf("Both element is not available.\n");
    }
    else {
        printf("%lf\n", final_sum);
    }

    return 0;
}

/* I am able to compute the sum of the elements and check 
every conditions. However, I am not able to return -111
when array[2] and array[5] is invalid.*/