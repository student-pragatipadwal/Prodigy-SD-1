#include <stdio.h>

float celsiusToFahrenheit(float celsius) 
{
    return (celsius*9/5)+32;
}

float celsiusToKelvin(float celsius) 
{
    return celsius+273.15;
}

float fahrenheitToCelsius(float fahrenheit) 
{
    return (fahrenheit-32)*5/9;
}

float fahrenheitToKelvin(float fahrenheit)
{
    return (fahrenheit-32)*5/9+273.15;
}

float kelvinToCelsius(float kelvin) 
{
    return kelvin-273.15;
}

float kelvinToFahrenheit(float kelvin)
{
    return (kelvin-273.15)*9/5+32;
}

int main() {
    float temperature, convertedTemp1, convertedTemp2;
    char unit;

    // Prompt user for input
    printf("Enter the temperature value: ");
    scanf("%f",&temperature);
    
    printf("Enter the unit of the temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c",&unit);

    // Convert and display the temperatures
    switch (unit) {
        case 'C':
        case 'c':
            convertedTemp1 = celsiusToFahrenheit(temperature);
            convertedTemp2 = celsiusToKelvin(temperature);
            printf("%.2f Celsius is equivalent to %.2f Fahrenheit and %.2f Kelvin.\n", temperature, convertedTemp1, convertedTemp2);
            break;

        case 'F':
        case 'f':
            convertedTemp1 = fahrenheitToCelsius(temperature);
            convertedTemp2 = fahrenheitToKelvin(temperature);
            printf("%.2f Fahrenheit is equivalent to %.2f Celsius and %.2f Kelvin.\n", temperature, convertedTemp1, convertedTemp2);
            break;

        case 'K':
        case 'k':
            convertedTemp1 = kelvinToCelsius(temperature);
            convertedTemp2 = kelvinToFahrenheit(temperature);
            printf("%.2f Kelvin is equivalent to %.2f Celsius and %.2f Fahrenheit.\n", temperature, convertedTemp1, convertedTemp2);
            break;

        default:
            printf("Invalid unit entered. Please use C, F, or K.\n");
            break;
    }

    return 0;
}