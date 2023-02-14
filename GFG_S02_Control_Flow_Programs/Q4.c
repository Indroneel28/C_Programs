// C Program to Find Largest Number Among Three Numbers

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter three numbers-\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is the largest",a);
    else if (b>a && b>c)
        printf("%d is the largest",b);
    else 
        printf("%d is the largest",c);
    return 0;
}
