//Small program to convert temperatures
//Zuhos

#include <stdio.h>
#include <ctype.h>

enum operation {
    celcius_to_kelvin = 1,
    celcius_to_fahrenheit = 2,
    kelvin_to_celcius = 3,
    kelvin_to_fahrenheit = 4,
    fahrenheit_to_celcious = 5,
    fahrenheit_to_kelvin = 6,
    exit = 7
};


float celcius_kelvin(float temp);
float celcius_fahrenheit(float temp);
float kelvin_celcius(float temp);
float kelvin_fahrenheit(float temp);
float fahrenheit_celcius(float temp);
float fahrenheit_kelvin(float temp);


void result(enum operation, float temp, float result);
void menu();


float celcius_kelvin(float temp){
    return temp + 273.15;
}

float celcius_fahrenheit(float temp){
    return (temp * 1.8) + 32;
}

float kelvin_celcius(float temp){
    return temp - 273.15;
}

float kelvin_fahrenheit(float temp){
    return (temp - 273.15) * 1.8 + 32;
}

float fahrenheit_celcius(float temp){
    return (temp - 32 ) / 1.8;
}

float fahrenheit_kelvin(float temp){
    return (temp + 459.67) * 5/9;
}



void result(enum operation op, float temp, float result){

    switch(op){
            case celcius_to_kelvin:
                printf("\n%.2f°C = %.2fK\n", temp, result);
                break;
            case celcius_to_fahrenheit:
                printf("\n%.2f°C = %.2f°F\n", temp, result);
                break;
            case kelvin_to_celcius:
                printf("\n%.2fK = %.2f°C\n", temp, result);
                break;
            case kelvin_to_fahrenheit:
                printf("\n%.2fK = %.2f°F\n", temp, result);
                break;
            case fahrenheit_to_celcious:
                printf("\n%.2f°F = %.2f°C\n", temp, result);
            case fahrenheit_to_kelvin:
                printf("\n%.2f°F = %.2fK\n", temp, result);
                break;
           
    }

}

void menu(){

    char c;
    int choice;
    float temp, temperature;
    enum operation op;

    //tests//
    /*
    printf("%.2f\n", celcius_fahrenheit(20));
    printf("%.2f\n", celcius_kelvin(20));
    printf("%.2f\n", kelvin_celcius(20));
    printf("%.2f\n", kelvin_fahrenheit(20));
    printf("%.2f\n", fahrenheit_celcius(20));
    printf("%.2f\n", fahrenheit_kelvin(20));
    */

    while(1){
        
        printf("1. Celcius to Kelvin\n");
        printf("2. Celsius to Fahrenheit\n");
        printf("3. Kelvin to Celsius\n");
        printf("4. Kelvin to Fahrenheit\n");
        printf("5. Fahrenheit to Celsius\n");
        printf("6. Fahrenheit to Kelvin\n");
        printf("7. Exit\n");

        //Input error check

      while (1) {
            printf("> ");
            if (scanf("%d", &choice) == 1) {
                while ((c = getchar()) != '\n' && c != EOF) {} 
                if (choice >= 1 && choice <= 8) break;
                printf("Err\n");

                continue;
            }
            printf("Invalid operation! try again:\n");
            while ((c = getchar()) != '\n' && c != EOF) {} 
        }
        
        op = choice;

        if(op == 7){
            printf("Bye!");
            break;
        }

        while(1){
            printf("Temp \n> ");
            if (scanf("%f", &temp) == 1) break;
            printf("Err in temp! \n");
            while ((c = getchar()) != '\n' && c != EOF) {}
        }
        
        switch(op){
            
            case celcius_to_kelvin:
                temperature = celcius_kelvin(temp);
            break;
            case celcius_to_fahrenheit:
                temperature = celcius_fahrenheit(temp);
            break;
            case kelvin_to_celcius:
                temperature = kelvin_celcius(temp); 
            break;
            case kelvin_to_fahrenheit:
                temperature = kelvin_fahrenheit(temp);
            break;
            case fahrenheit_to_celcious:
                temperature =  fahrenheit_celcius(temp);
            break;
            case fahrenheit_to_kelvin:
                temperature = fahrenheit_kelvin(temp);
            break;
        }

        result(op, temp, temperature);

    }
}

//

int main(void){
    menu();
    return 0;
}
