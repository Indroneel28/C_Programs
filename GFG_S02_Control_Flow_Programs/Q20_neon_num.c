// C Program to Check whether the input number is a Neon Number
// Example- 9 is a neon number
// because 9^2= 81 So, 8+1 = 9 = number itself that is 9
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number to be checked whether it is a neon number or not-\n");
    scanf("%d",&num);
    int square= num*num, sum=0;
    while(square>0){
        sum+=square%10;
        square/=10;
    }
    if(sum==num)
        printf("%d is a neon number",num);
    else
        printf("%d is not a neon number",num);
}