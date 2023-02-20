// C Program to Find G.C.D Using Recursion

#include <stdio.h>
int recursion_gcd(int num1,int num2){
    int max= num1>num2?num1:num2;
    int min= num1>num2?num2:num1;
    if(num1%min==0 && num2%min==0){
        return min;
    }
    recursion_gcd(max,min-1);
}
int main(){
    printf("Enter two numbers whose GCD you want-\n");
    int a,b;    
    scanf("%d %d",&a,&b);
    recursion_gcd(a,b);
}