/*
CH-230-A
a5 p1.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>

void traingular(int n, char c){
    for(int i = 0; i<n; i++){
        for(int j= 0; j < n -i; j++ ){
            printf("%c", c);
        }
        printf("\n");
    }
}
int main(){
    int n;
    char c;
    scanf("%d", &n);
    //to read only one character.
    getchar();
    scanf("%c", &c);

    traingular(n,c);
    return 0;
}