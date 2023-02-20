#include  <stdio.h>
int recursion(int num){
    if(num==1)
        return num;
    return num + recursion(num-1);
}
int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    printf("The sum of %d natural numbers is %d",num,recursion(num));
}