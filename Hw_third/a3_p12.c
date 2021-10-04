/*
CH-230-A
a3 p12.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int main(){
    char one[100];
    char two[100];
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);

    //to prevent from error while concatenation
    //assigning new line as end of line
    for (int i = 0; i < strlen(one); i++){
        if (one[i] == '\n'){
            one[i] = '\0';
        }
    }

    for (int i = 0; i < strlen(two); i++){
        if (two[i] == '\n'){
            two[i] = '\0';
        }

    }

    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));

    //concatenating two string.
    printf("concatenation=%s\n", strcat(one,two));

    //copying string
    char three[100];
    printf("copy=%s\n", strcpy(three, two));

    //comparing string
    if (strcmp(one, two) > 0){ //mean true
        printf("One is greater than two\n");
    }
    else {
        printf("One is smaller than two\n");
    }

    char c;
    scanf("%c", &c);
    //searching charcter in string.
    if (strchr(two, c)){
        for (int i = 0; i < strlen(two); i++){
            if (two[i] == c ){
                printf("position=%d\n", i);
                //break; //only reading the first occurance
            }
        }
    }
    else {
        printf("Character was not available.\n");
    }

    return 0;
}
/*Be careful with the strings. Try to take out the end of lines while 
reading form the arrays. It will create errors while using the 
functions from the library of string.h. For eg, concatenation.*/
