/*
CH-230-A
a5 p3.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//counting the total number of the lower characters in a string. 
int count_lower(char *str){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (*(str + i) >='a' && (*(str + i)) <= 'z'){
            count++;
        }
    }
    return count;
}
int main(){
    char str[50];
    char *dyn_array;
    while (1){
        fgets(str, sizeof(str), stdin);
        //breaking loop when reading return key. 
        if (strcmp(str, "\n") == 0){
            break;
        }
        dyn_array = (char*) malloc(sizeof(str));
        if (dyn_array == NULL){
            printf("The memory was not allocated.\n");
        }
        for (int i = 0; i < strlen(str); i++){
            dyn_array[i] = str[i];
        }
        printf("The number of lowercase is:%d\n", count_lower(dyn_array));
        
        free (dyn_array);
    }
    return 0;
}