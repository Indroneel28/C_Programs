// C Program to Print Prime Numbers From 1 to N 

#include <stdio.h>
int main(){
    printf("Enter the value of n-\n");
    int n;
    scanf("%d",&n);

    printf("The prime numbers between 1 and %d are-\n",n);
    for(int i=1; i<=n; i++){
        //we need to check whether i is a prime number or not
        int count=0;
        for(int j=1; j<=i; j++){
            if (i%j==0)
            count++;
        }
        if(count==2)
        printf("%d ",i);
    }
}