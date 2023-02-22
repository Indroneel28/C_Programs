// C Program to Find Factorial of a Number

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, fact=1;
    printf("Enter a number-\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
        fact*=i;   
    printf("The factorial %d is %d",num,fact);
    return 0;
}
