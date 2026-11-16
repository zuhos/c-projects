#include <stdio.h>


float add(int a, int b);
float minus(int a, int b);
float divide(int a, int b);

int main(void){

    //Pointer array to functions add and minus
    float(*ptr[])(int , int ) = { add, minus, divide};

    printf("%.0f\n", ptr[0](1, 2)); // add
    printf("%.0f\n", ptr[1](1, 2)); // add
    printf("%.1f\n", ptr[2](1, 2)); // add
    
    return 0;


}

float add(int a, int b){
    return a + b;
}

float minus (int a, int b){
    return a - b;
}

float divide(int a, int b){
    if(b != 0){
        return (float)a / b;
    }
    else {
        printf("You cant divide with zero!");
    }
}