#include <iostream>
#include <stdio.h>

float celsiusToFahrenheit(float celsius);
float celsiusToKelvin(float celsius);
float fahrenheitToCelsius(float fahrenheit);
float fahrenheitToKelvin(float fahrenheit);
float kelvinToCelsius(float kelvin);
float kelvinToFahrenheit(float kelvin);

int main() {
    int choice;
    float temp, convertedTemp;

    printf("Kalkulator konwertera temperatury\n");
    printf("Wybierz opcje konwersji:\n");
    printf("1. Celsjusz na Fahrenheit\n");
    printf("2. Celsjusz na Kelvin\n");
    printf("3. Fahrenheit na Celsjusz\n");
    printf("4. Fahrenheit na Kelvin\n");
    printf("5. Kelvin na Celsjusz\n");
    printf("6. Kelvin na Fahrenheit\n");
    printf("Wprowadz swoj wybor (1-6): ");
    scanf("%d", &choice);


    printf("Wprowadz temperature do konwersji: ");
    scanf("%f", &temp);


    switch(choice) {
        case 1:
            convertedTemp = celsiusToFahrenheit(temp);
            printf("%.2f Celsjusz = %.2f Fahrenheit\n", temp, convertedTemp);
            break;
        case 2:
            convertedTemp = celsiusToKelvin(temp);
            printf("%.2f Celsjusz = %.2f Kelvin\n", temp, convertedTemp);
            break;
        case 3:
            convertedTemp = fahrenheitToCelsius(temp);
            printf("%.2f Fahrenheit = %.2f Celsjusz\n", temp, convertedTemp);
            break;
        case 4:
            convertedTemp = fahrenheitToKelvin(temp);
            printf("%.2f Fahrenheit = %.2f Kelvin\n", temp, convertedTemp);
            break;
        case 5:
            convertedTemp = kelvinToCelsius(temp);
            printf("%.2f Kelvin = %.2f Celsjusz\n", temp, convertedTemp);
            break;
        case 6:
            convertedTemp = kelvinToFahrenheit(temp);
            printf("%.2f Kelvin = %.2f Fahrenheit\n", temp, convertedTemp);
            break;
        default:
            printf("Nieprawidłowy wybór. Proszę uruchomić program ponownie i wybrać poprawną opcję.\n");
    }

    return 0;
}


float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin * 9/5) - 459.67;
}