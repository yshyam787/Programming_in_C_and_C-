/*
CH-230-A
a4 p12.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//replacing 'c' with 'e'
void replaceAll(char *str, char c, char e){
    char temp[80];
    //copying the original string for later use. 
    strcpy(temp, str);
    for (int i = 0; str[i] != '\0'; i++){   
        if (*(str + i) == c){
            *(str + i)= e;
        }
    }
    printf("The original string was: %s", str);
    printf("The character to be replaced was: %c\n", c);
    printf("The replacing character was: %c\n", e);
    printf("The replaced string is: %s",temp);
}

int main(){
    char ch[80], tobereplaced, replacing;
    while (1){
        printf("Please enter the string: ");
        fgets(ch, sizeof(ch), stdin);
        
        if (strcmp (ch, "stop\n") == 0){
            break;
        }

        printf("Please enter the character to be replaced: ");
        scanf("%c", &tobereplaced);

        printf("Please enter the replacing character: ");
        getchar();
        scanf("%c", &replacing);

        char *dyn_array = (char*) malloc (sizeof(ch));
        if (dyn_array == NULL){
            printf("The memory was not allocated.\n");
        }
        for(int i = 0; ch[i] != '\0'; i++){
            dyn_array[i] = ch[i];
        }
        //getting the spaces at the end. 
        getchar();
        replaceAll(dyn_array, tobereplaced, replacing);

        free(dyn_array);
    }

    return 0;
}