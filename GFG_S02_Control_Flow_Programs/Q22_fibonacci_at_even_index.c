// C program to Sum of Fibonacci Numbers at Even Indexes up to N Terms 
#include <stdio.h>
int main(){
    printf("Enter a number-\n");
    int n;
    scanf("%d",&n);
    int sum=0, i=0;
    int x=0, y=1;
    while(i<=2*n){
        int printo;
        if(i==0)
            printo=x;
        else if(i==1)
            printo=y;
        else{
            printo= x+y;
            int z=y;
            y=x+y;
            x=z;
        }
        i++;
        if(i%2==0){
            printf("%d ",printo);
        }
    }
}