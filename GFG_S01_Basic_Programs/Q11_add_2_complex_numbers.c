// C Program to Add Two Complex Numbers 

#include <stdio.h>
typedef struct complex
    {
        int real;
        int imaginary;
    }complex;

int main(){
    complex a,b,sum;
    printf("Enter the first complex number's real part-\n");
    scanf("%d",&a.real);
    printf("Enter the first complex number's imaginary part-\n");
    scanf("%d",&a.imaginary);

    printf("Enter the second complex number's real part-\n");
    scanf("%d",&b.real);
    printf("Enter the second complex number's imaginary part-\n");
    scanf("%d",&b.imaginary);

    printf("First complex number is %d+%di\n",a.real,a.imaginary);
    printf("Second complex number is %d+%di\n",b.real,b.imaginary);

    sum.real= a.real+b.real;
    sum.imaginary= a.imaginary+b.imaginary;
    printf("The sum of first and second complex number is %d+%di\n",sum.real,sum.imaginary);
}