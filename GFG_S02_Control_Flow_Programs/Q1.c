// C Program to Check Whether a Number is Positive, Negative, or Zero
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=0;
    printf("Enter a number- ");
    scanf("%d",&num);
    if (num== 0)
    {
        printf("%d is zero",num);
    }
    else if (num>0)
    {
        printf("%d is positive",num);
    }
    else{
        printf("%d is negative",num);
    }

    return 0;
}
