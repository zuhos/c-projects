
//Small program that checks if str is a palindrome.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Function to reverse s
void reverse(char *str, int n);
//Function to compare strings
int my_strcmp(char *first, char *second);
//Function to remove spaces and punctuations from s
void remove_spaces_punctuation(char *str);

int main(void){

    printf("Is given string palindrome?\n");
    printf("> ");
    char str[100] = "A man, a plan, a canal, Panama";
    int len = strlen(str);
    char temp[len];
   
    printf("%s", str);

    //Both str:s to lower cases
    for(int i = 0; i < strlen(str); i++){
        temp[i] = tolower(str[i]);
        str[i] = tolower(str[i]);
    }

    //remove spaces and punctuations from strs
    remove_spaces_punctuation(str);
    remove_spaces_punctuation(temp);

    reverse(temp, len);

    /*
    printf("\nOriginal: %s", str);
    printf("\nReversed: %s", temp);
    */

    if(my_strcmp(str, temp) == 0){
        printf("\nstr is a palindrome");
    } else {
        printf("\nstr is not a palindrome");
    }

    return 0;

}

int my_strcmp(char *first, char *second){
    
    char *c_f = first;
    char *c_s = second;

    while(*c_f != '\0' || *c_s != '\0'){

        if(*c_f != *c_s){
            return 1;
        }

        //printf("%c", *c_f);
        *c_f++;
        *c_s++;
    }

    return 0;
}


void remove_spaces_punctuation(char *str){

    char *space = str;
    while(*str++ = *space++){

        while(*space == ' ' || *space == ',' || *space == '.'){
            ++space;
        }
        
    }
}


void reverse(char *temp, int len){
   for(int i = len; i > 0; i--){
        temp[i] = temp[i];
    }
}

