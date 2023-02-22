// C Program to Calculate the Factorial of a Number Using Recursion 

#include <stdio.h>
int factorial_recursion(int num){
    if(num==0)
        return 1;
    return num*factorial_recursion(num-1);
}
int main(){
    printf("Enter a number whose factorial you want: ");
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial_recursion(n));
}