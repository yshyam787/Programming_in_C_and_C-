/*
CH-230-A
a3 p7.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

void print_form(int n, int m, char c);

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    char c;
    //to prevent from reading return keys.
    getchar();
    scanf("%c", &c);

    print_form(n,m,c);
    return 0;
}

//printing trapezoid
void print_form(int n, int m, char c){
    for(int i = 0; i<n; i++){
        for (int j = 0; j < m+i; j++){
            printf("%c", c);
        }
        printf("\n");//differentiating lines
    }
}