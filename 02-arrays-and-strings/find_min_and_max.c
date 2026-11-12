//Program to find max and min number from table
//By Zuhos

#include <stdio.h>


int find_max(int table[], int length);
int find_min(int table[], int length);
void print_table(int table[], int length);


int main(){

    int numbers [] = {0.1, 1, 10, 3, 40, 50, 60, 100, 1, 30, 40, 50, 60, 70, 100};
    int max, min;    
    size_t length = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Table of %d numbers \n", length);
    print_table(numbers, length);
    
    max = find_max(numbers, length);
    min = find_min(numbers, length);

    printf("\nMin value in table: %d", min);
    printf("\nMax value in table: %d", max);

    return 0;
}

void print_table(int table[], int length){

    for(int i = 0; i < length; i++){
        printf("%d ", table[i]);
    }
}

int find_min(int table[], int length){
    int min = table[0];

    for( int i = 0; i < length; i++){
        if(table[i] < min){
            min = table[i];
        }
    }

    return min;
}

int find_max(int table[], int length) {

    int max = table[0];

    for(int i = 0; i < length; i++){

        if(table[i] > max){
            max = table[i];
        }
    }

    return max;

}