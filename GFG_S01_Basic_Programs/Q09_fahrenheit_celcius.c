// C Program to Calculate Fahrenheit to Celsius
#include <stdio.h>
int main(){
    printf("Enter temperature in fahrenheit-\n");
    float fah;
    scanf("%f",&fah);
    float celcius= (fah-32)*5.0f/9;
    printf("%.2f fahrenheit is %.2f celcius",fah,celcius);
}