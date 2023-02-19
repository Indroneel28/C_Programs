// C Program to Find Simple Interest

#include <stdio.h>
int main(){
    float p,r,t;
    printf("Enter the principal amount-\n");
    scanf("%f",&p);
    printf("Enter the rate of interest-\n");
    scanf("%f",&r);
    printf("Enter the time in years-\n");
    scanf("%f",&t);

    printf("The simple interest is %f",(p*r*t)/100);
}