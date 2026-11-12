
//Simple math game where player guesses(hopefully not!) basic math problems.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    char operator[4] = {'+', '-', '/', '*'};
    srand(time(NULL));

    while(1){

    int numberOne = rand() % 10 + 1;
    int numberTwo = rand() % 10 + 1;
    int answer = 0;
    int userGuess;
        
    int op = rand() % 4;

    switch(operator[op]){

        case '+':
            answer = numberOne + numberTwo;
        break;
        case '-':
            answer = numberOne - numberTwo;
        break;
        case '/':
            answer = numberOne / numberTwo;
        break;
        case '*':
            answer = numberOne * numberTwo;
        break;
    }


    printf("How much is? %d %c %d = ", numberOne, operator[op], numberTwo);
    
    scanf("%d", &userGuess);

        if(userGuess == answer){
            printf("Kick ass!\n");
        } else {
            printf("NOO! it's wrong!!!\n");
        }

    }

    return 0;
    
}