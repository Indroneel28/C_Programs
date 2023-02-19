// C Program to Check Whether a Number is Prime or Not

// shortcut method
/*
#include <stdio.h>
void main()
{
    printf("Enter a number to be checked whether prime or not-\n");
    int num;
    scanf("%d", &num);
    if (num < 2)
    {
        printf("%d is not a prime number", num);
        return;
    }

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            return;
        }
    }
    printf("%d is a prime number", num);
}
*/

//Method 2
//perfect code
#include <stdio.h>
int main()
{
    printf("Enter a number to be checked whether prime or not-\n");
    int num;
    scanf("%d", &num);
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
}
