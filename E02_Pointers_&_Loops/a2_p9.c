/*
CH-230-A
a2 p9.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);

    if(ch>=48 && ch<=57){
        printf("%c is a digit\n", ch);
    }
    else if((ch>=65 && ch<=90) || (ch>=98 && ch<=122)){
        printf("%c is a letter\n", ch);
    }
    else{
        printf("%c is some other symbol\n", ch);
    }
    return 0;
}
