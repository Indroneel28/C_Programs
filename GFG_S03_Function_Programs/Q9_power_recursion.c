// C Program to Calculate Power Using Recursion

#include <stdio.h>
int power_recursion(int num, int power){
    if(power==0)
        return 1;
    return num*power_recursion(num,power-1);
}
int main(){
    int n,pow;
    printf("Enter a number whose power you want- ");
    scanf("%d",&n);
    printf("Enter the power- ");
    scanf("%d",&pow);
    printf("%d to the power %d is %d",n,pow,power_recursion(n,pow));
}