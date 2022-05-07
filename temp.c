#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]){
    char unit;
    float temp;

    unit = toupper(unit);

    printf("\nWhat's the temperature unit? (F) or (C) or (K) ");
    scanf("%c",&unit);

    if (unit == 'C')
    {
        printf("\n Enter your temperature in Celsius: ");
        scanf("%f",&temp);
        temp = 1.8 * temp + 32;

        printf("The temperature in Farenheit is: %f", temp);
    }
    else if (unit == 'F');
    {
        printf("\n Enter the temperature in Farenheit: ");
        scanf("%f",&temp);
        temp = (5*(temp-32))/9;

        printf("The temperature in Celsius is: %f ", temp);
    }
    
}

