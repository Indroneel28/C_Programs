// C Program to Check Whether a Number is a Palindrome or Not 

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number-\n");
    scanf("%d",&num);

    int revnum=0, dup=num;
    while(dup!=0){
        revnum= revnum*10 + dup%10;
        dup/=10;
    }
    //checking conditions
    if(num== revnum) 
        printf("%d is a pallindrome",num);
    else 
        printf("%d is not a pallindrome",num);
}
