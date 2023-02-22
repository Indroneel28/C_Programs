// C Program to Generate Multiplication Table 

#include <stdio.h>
int main(){
    //Taking input from user
    int num;
    printf("Enter the number whose multiplication table you want-\n");
    scanf("%d",&num);
    printf("\nThe multiplication table of %d is-\n",num);
    for(int i=1; i<=10; i++)
        printf("%d X %d = %d\n",num,i,(num*i));

}