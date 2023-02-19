// C Program to Swap Two Numbers

#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers-\n");
    scanf("%d %d",&num1,&num2);

    printf("Before Swapping-\n");
    printf("Num 1 is %d and Num 2 is %d\n",num1,num2);

    printf("After swapping-\n");
    //using arithmetic operators swapping values
    num2= num1+num2;
    num1= num2-num1;
    num2= num2- num1;
    printf("Num 1 is %d and Num 2 is %d",num1,num2);
}

//we can also use bitwise operators
// num1= num1^num2;
// num2= num1^num2;
// num1= num1^num2