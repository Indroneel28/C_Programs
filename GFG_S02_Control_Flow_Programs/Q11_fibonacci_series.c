// C Program to Print Fibonacci Series

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms you want in the fibonacci series-\n");
    scanf("%d",&n);
    if(n<0) return 0; //main method will terminate if negative numbers inserted

    int x=0,y=1;
    for(int i=1; i<=n; i++){
        if(i==1) printf("%d ",0);
        else if(i==2) printf("%d ",1);
        else{
            printf("%d ",x+y);
            int z=y;
            y=x+y;
            x=z;
        }
        
    }
}