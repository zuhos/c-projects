#include <stdio.h>
#include <string.h>

int main(void){

    FILE *fptr = fopen("names.txt", "r");
    char *name = "Gordon";
    int found = 1;

    if(fptr != NULL){
        printf("File found!\n");
    }

    char string[100];

    while (fgets(string, 100, fptr)){
    
        if(strcmp(name, string) == 0){
            found = 0;
        }
        printf("%s", string);
    }


    if(found == 0){
        printf("\nName %s found on list", name);
    }

    fclose(fptr);

    return 0;

}