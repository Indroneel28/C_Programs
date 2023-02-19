// C Program to Check Prime Number By Creating a Function 

#include <stdio.h>
int check_Prime_Number(int num){
    for(int i=2; i<=num-1; i++){
        if (num%i==0)
            return 0;
    }
    return 1;
}
int main(){
    printf("Enter a number to be checked for prime number-\n");
    int n;
    scanf("%d",&n);
    if (check_Prime_Number(n))
        printf("%d is a prime number",n);
    else
     printf("%d is not a prime number",n);
}