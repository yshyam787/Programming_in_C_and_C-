/*
CH-230-A
a1 p1.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include <stdio.h>
int main() {
    double result; /* The result of our calculation */
    result = (3.0 + 1) / 5;
    printf("The value for 4/5 is %lf\n", result);
    return 0;
}

/*Here, everything is considered as an "int" unless declared. Thus, integer result that we get from "result" is 0
and is converted to 0.000000 as we are expecting the floating result in the print function. However, we can 
solve this problem by using a floating point operand as 3.0 to the "result" variable and get the output as a floating 
number as 0.800000*/
