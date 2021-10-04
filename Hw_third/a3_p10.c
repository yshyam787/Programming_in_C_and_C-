/*
CH-230-A
a3 p10.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

//getting product by value.
float product (float a, float b){
    return a*b;
}

//gettig product by reference. 
void productbyref(float a, float b, float *p){
    *p = a*b; //chaning the content of p.
}

//changing by reference.
void modifybyref(float *a, float *b){
    *a = *a + 3;
    *b = *b + 11;
}

int main(){
    float x, y;
    scanf("%f %f", &x, &y);

    printf("%f\n", product(x,y));
    
    float *ptr; //declaring a pointer.
    float value = 0.0; //initializing a random value to get memory address.
    ptr = &value; //getting the address of that value.
    productbyref(x,y,ptr); //passing address of value to the function.
    printf("%f\n", *ptr);//changed value of pointer is printed.

    modifybyref(&x, &y);
    printf("%f and %f\n", x, y);
    return 0; 
}

/*The second function is bit trickier. There, the 
address of the value is passed to the function. The pointer
in the prototype points to the address of the value. 
Wherease, dereferencing is being done in the function 
where the content of the pointer is being changed by 
multiplication. */ 