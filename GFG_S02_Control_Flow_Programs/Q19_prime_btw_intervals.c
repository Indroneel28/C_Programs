// C Program to Display Prime Numbers Between Intervals

#include <stdio.h>
int main(){
    printf("Enter the intervals-\n");
    int start, stop;
    scanf("%d %d",&start, &stop);
    printf("The prime numbers between %d and %d are-\n",start,stop);
    for(int i=start; i<=stop; i++){
        //we need to check whether i is a prime number or not
        int count=0;
        for(int j=1; j<= i; j++){
            if(i%j==0) count++;
        }
        if(count==2)
            printf("%d ",i);
    }
}