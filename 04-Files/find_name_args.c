
//Program which seeks names from list using commandline argument as a input

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){


    FILE *fptr = fopen("names.txt", "r");
    int flag = 1;
    int row = 0;
    if(fptr != NULL);

    if(argv[1] == NULL){
        printf("No arguments given");
    }

    char *name = argv[1];

    char string[100];

    while(fgets(string, 100, fptr)){

        if(strcmp(name, string) == 0){
            flag = 0;
        }
      row++;
    }

    if(flag == 0){
        printf("\n%s found from name list from row %d", name, row);
    }
    else {
        printf("\n Name not found from list");
    }


    return 0;

}