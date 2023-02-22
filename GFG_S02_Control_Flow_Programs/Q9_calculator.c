// C Program to Make a Simple Calculator 

#include <stdio.h>
int main(){
    //taking input from the user
    int a,b; char c;
    printf("Enter the numbers-\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operator-\n");
    scanf(" %c",&c); //buffer problem

    //using switch case
    switch(c){
        case '+': printf("The sum of %d and %d is %d",a,b,(a+b)); break;
        case '-': printf("The difference between %d and %d is %d",a,b,(a-b)); break;
        case '*': printf("The product of %d and %d is %d",a,b, a*b); break;
        case '/': printf("The quotent when %d divides %d is %d",b,a,(a/b)); break;
        case '%': printf("The remainder when %d divides %d is %d",b,a,(a%b)); break;
        default: printf("Invalid operator!!");
    }
}