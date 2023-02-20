// C Program to Display Prime Numbers Between Two Intervals Using Functions 

#include <stdio.h>
void prime_print(int num1, int num2){
    printf("The prime numbers between %d and %d are-\n",num1,num2);
    for(int i=num1; i<=num2; i++){
        //we have to now check whether i is a prime number or not
        for(int j=2;j<=i-1; j++){
            if(i%j==0)
                break;
            if(j==i-1)
                printf("%d ",i);
        }
    }
}
int main(){
    int start,stop;
    printf("Enter the intervals-\n");
    scanf("%d %d",&start, &stop);
    prime_print(start,stop);
}