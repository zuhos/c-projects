//This program seeks every row from array that
//where town in Dublin

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    
   // int table[][3] = {{1,2,3},{2,3,4}};
    // 3 rows, 3 columns
  char table[50][3][50] = {
    {"Liam Murphy", "Dublin", "Male"},
    {"Sofia Morales", "Madrid", "Female"},
    {"Chloe Tremblay", "Toronto", "Female"},
    {"Noah Taylor", "London", "Male"},
    {"Emma Wilson", "Sydney", "Female"},
    {"Oliver Brown", "Manchester", "Male"},
    {"Ava Johnson", "Seattle", "Female"},
    {"Elijah Miller", "Chicago", "Male"},
    {"Mia Anderson", "Melbourne", "Female"},
    {"Lucas Martin", "Vancouver", "Male"},
    {"Isabella Davis", "Boston", "Female"},
    {"Mason Moore", "London", "Male"},
    {"Amelia Clark", "Bristol", "Female"},
    {"Ethan White", "Austin", "Male"},
    {"Harper Harris", "Chicago", "Female"},
    {"Logan Thompson", "Calgary", "Male"},
    {"Evelyn Walker", "Auckland", "Female"},
    {"James Stewart", "Edinburgh", "Male"},
    {"Abigail Young", "Toronto", "Female"},
    {"Benjamin King", "Atlanta", "Male"},
    {"Emily Wright", "Leeds", "Female"},
    {"Jacob Scott", "Dallas", "Male"},
    {"Ella Gagnon", "Montreal", "Female"},
    {"Michael Adams", "Sydney", "Male"},
    {"Scarlett Campbell", "Glasgow", "Female"},
    {"Daniel Baker", "Houston", "Male"},
    {"Grace Nelson", "London", "Female"},
    {"Henry Carter", "Oxford", "Male"},
    {"Victoria Mitchell", "Ottawa", "Female"},
    {"Jackson Perez", "Chicago", "Male"},
    {"Riley Roberts", "Cardiff", "Female"},
    {"Sebastian Turner", "San Diego", "Male"},
    {"Aria Phillips", "Liverpool", "Female"},
    {"Jack Kelly", "Dublin", "Male"},
    {"Lily Evans", "Cambridge", "Female"},
    {"Owen Edwards", "Seattle", "Male"},
    {"Zoe Collins", "Perth", "Female"},
    {"Samuel Stewart", "Boston", "Male"},
    {"Hannah Morris", "Manchester", "Female"},
    {"Matthew Rogers", "Orlando", "Male"},
    {"Nora MacDonald", "Halifax", "Female"},
    {"Joseph Cook", "Toronto", "Male"},
    {"Hazel Morgan", "Adelaide", "Female"},
    {"David Bell", "London", "Male"},
    {"Violet Bailey", "Brisbane", "Female"},
    {"Carter Rivera", "Austin", "Male"},
    {"Aurora Cooper", "Winnipeg", "Female"},
    {"Wyatt Richardson", "Chicago", "Male"},
    {"Savannah Walsh", "Dublin", "Female"},
    {"Julian Howard", "Melbourne", "Male"}
    };

    int found = 1;

    char *seeking = "Dublin";
    
    int i = 1;
    printf("Results:\n");
    for(int row = 0; row < 50; row++){
        
        if(strcmp(table[row][1], seeking) == 0){
         printf("%d ", i);
         for(int col = 0; col < 3; col++){
                printf("%s ", table[row][col]);
                found = 0;
         }
            printf("\n");
            i++;
        } 
       
    }

    if(found == 1)
        printf("No information found!");


    return 0;
}