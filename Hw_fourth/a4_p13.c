/*
CH-230-A
a4 p13.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//changing to the upper case.
void uppcase (char *str) {
    for (int i = 0; str[i] != '\0'; i++){
        *(str + i) = toupper(*(str + i));
    }
    printf("uppcase=%s", str);
}

//changing to the lower case. 
void lowcase (char *str) {
    for (int i = 0; str[i] != '\0'; i++){
        *(str + i) = tolower(*(str + i));
    }
    printf("lowcase=%s", str);
}

int main(){
    char ch [90];
    char *dyn_array;
    while (1){
        fgets(ch, sizeof(ch), stdin);
        //breaking the loop for reading 'exit'.
        if (strcmp(ch, "exit\n") == 0){
            break;
        }
        dyn_array = (char*) malloc (sizeof(ch));
        if (dyn_array == NULL){
            printf("The memory was not allocatd.\n");
        }
        for (int i = 0; i < strlen(ch); i++){
            dyn_array[i] = ch[i];
        }

        uppcase(dyn_array);
        lowcase(dyn_array);
        
        free(dyn_array);
    }
    return 0;
}