#include <stdio.h>

void convertKC() {
    float celcius, kelvin;

    printf("\nEnter Celsius value: ");
    scanf("%f", &celcius);

    kelvin = celcius + 273.13f;
    printf("Kelvin: %.2f\n", kelvin);

    printf("\nEnter Kelvin value: ");
    scanf("%f", &kelvin);

    celcius = kelvin - 273.13f;
    printf("Celsius: %.2f\n", celcius);
}

void convertCm()
{
    float cm,m;
    printf("\nEnter Cm : ");
    scanf("%f",&cm);

    m = cm/100;
    printf("\nCm : %.2f",m);

    printf("\nEnter M : ");
    scanf("%f",&m);

    cm = m*100;
    printf("\nM : %.2f",cm);
}

int main() {
    convertKC();
    convertCm();
    return 0;
}
