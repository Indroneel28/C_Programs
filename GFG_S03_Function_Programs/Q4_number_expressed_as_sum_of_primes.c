#include <stdio.h>
int check_prime(int num){
    int count=0;
    for(int i=1; i<=num; i++){
        if(num%i==0)
            count++;
    }
    if(count==2)
        return 1;
    else
        return 0;
}
int main(){
    printf("Enter the number to be checked for prime number-");
    int num;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        int num1=i;
        int num2= num-i;
        if(check_prime(num1)&& check_prime(num2)){
            printf("%d can be expressed as %d + %d as sum of primes",num,num1,num2);
            return 0;
        }
    }
    printf("%d cannot be expressed as sum of primes",num);
}