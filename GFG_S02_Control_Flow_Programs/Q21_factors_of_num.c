// C Program to Find All Factors of a Natural Number

#include <stdio.h>
int main(){
    printf("Enter a number-\n");
    int num;
    scanf("%d",&num);

    printf("The factors of %d are-\n",num);
    for(int i=1; i<=num; i++){
        if(num%i==0) {printf("%d ",i);}
    }
}