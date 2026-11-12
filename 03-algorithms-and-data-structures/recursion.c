//Program for testing recursion

#include <stdio.h>

void recursion(int number){

    if(number == 0){
        return;
    } 
        
    printf("%d ", number);
    recursion(number - 1);
    
}


int sum(int num){
    if(num > 0){
        return num + sum(num - 1);
    } 

    return 0;
}




int main(void){

    recursion(10);
    int r = sum(25);

    printf("\nSum: %d ", r);

    return 0;
}