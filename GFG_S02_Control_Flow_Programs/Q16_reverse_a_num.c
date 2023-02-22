// C Program to Reverse a Number

#include <stdio.h>
int main(){
    printf("Enter a number to be reversed-\n");
    int num;
    scanf("%d",&num);

    int dup=num, newNum=0;
    while(dup!=0){
        newNum= newNum*10+ dup%10;
        dup/=10;
    }
    printf("The reversed number is %d",newNum);
}