/*
CH-230-A
a8 p8.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
int main() {
    int count = 0;
    //setting the initial flag as true (1), just eg. 
    int bool = 1;
    char ch;
    FILE *wordsfile = fopen ("words.txt", "r");
    if (wordsfile == NULL) {
        printf("Error in opening the file!\n");
        exit(1);
    }
    while ((ch = fgetc(wordsfile)) != EOF) {
        if (ch == ' ' || ch == ',' || ch == '?'
        || ch == '!' || ch == '.' || ch == '\t'
        || ch == '\r' || ch == '\n')
        {   //setting the flag true if we get those characters. 
            bool = 1; 
        }
        //if the next word is not empty and the flag is true, 
        else if (bool == 1)
        {   
            //increase the count. 
            count++;
            //set the flag false once again, for the later use. 
            bool = 0;
        }
    }
    printf("The file contains %d words.\n", count);
    fclose(wordsfile);

    return 0;
}