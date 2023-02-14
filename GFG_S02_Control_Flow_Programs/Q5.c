// C Program to Calculate Sum of Natural Numbers 

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, sum=0;
    printf("Enter the number till that you want to sum the natural numbers-\n");
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
        sum+=i;
    printf("The sum of %d natural numbers is %d",n,sum);
    return 0;
}
