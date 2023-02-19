// C Program to Find Compound Interest
/*
Compound Interest formula:
Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)^t

Compound Interest = Amount – P
Where, 
P is principal amount 
R is the rate and 
T is the time span
*/

#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t;
    printf("Enter the principal amount-\n");
    scanf("%f",&p);
    printf("Enter the rate of interest-\n");
    scanf("%f",&r);
    printf("Enter the time in years-\n");
    scanf("%f",&t);

    float amount= p*pow((1 + r/100),t);
    float ci= amount-p;
    printf("The compund interest is %.2f",ci);
}