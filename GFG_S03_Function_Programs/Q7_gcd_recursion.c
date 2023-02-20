// C Program to Find G.C.D Using Recursion

#include <stdio.h>
//Most efficient program even not in GFG //THANKS ITER
int gcd_recursion(int num1, int num2){
    //using euclidean algortithm(taught in discrete mathematics)
    int a= num1>num2?num1:num2; //greater number
    int b= num1<num2?num1:num2; //smaller number
    if(a%b==0)
        return b;
    gcd_recursion(b, a%b); 
}
int main(){
    printf("Enter two numbers whose gcd you want: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd_recursion(a,b));
}