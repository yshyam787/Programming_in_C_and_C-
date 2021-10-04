/*
CH-230-A
a4 p4.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

//counting consonants
int count_consonants(char str[]){
    int count = 0;
    //discarding vowels.
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            //do nothing
        } 
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    return count;
}

int main(){
    char str[100];
    //for looping numerous times.
    for(int i = 0; i < 100; i++){
        fgets(str, sizeof(str), stdin);
        if (strlen(str) == 1){
            break;
        }
        printf("Number of consonants=%d\n", count_consonants(str));
    }
    return 0;
}