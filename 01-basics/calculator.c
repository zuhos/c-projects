
#include <stdio.h>


int main(void){

    int num = 0, result = 0;
    int total = 0;
    char op;

    while(true){
        
        printf("\nCalculator");
        printf("\n------------");
        printf("\n%12d", total);
        printf("\n------------\n");

        while ((op = getchar()) != '\n' && op != EOF) {};
        printf("\n> "); 
        scanf("%c %d", &op, &num);

        switch(op){
            case '+':
                result += num;
            break;
            case '-':
                result -= num;
            break;
            case '/':
                if(num != 0){
                    result /= num;
                } else {
                    printf("Err cannot divide with 0");
                }
            break;
            case '*':
                result *= num;
            break;
        }

        total = result;
    
    }

    return 0;

}