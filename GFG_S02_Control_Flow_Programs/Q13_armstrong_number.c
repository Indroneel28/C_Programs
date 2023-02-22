// C Program to Check Armstrong Number

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number-\n");
    scanf("%d",&num);
    int dup=num, count=0;

    //counting number of digits
    while(dup!=0){
        count++;
        dup/=10;
    }
    dup=num;
    int sum=0; //will store sum of powers of digits
    while(dup!=0){
        int pro=1;
        for(int i=1; i<=count; i++){
            pro*=(dup%10);
        }
        //sum+=pow(dup%10,count); // instead of for loop we can write this also
        sum+=pro;
        dup/=10;
    }

    //now checking whether number is armstrong or not
    if(sum==num) 
        printf("%d is an armstrong number",num);
    else
        printf("%d is not an armstrong number", num);
    //Time complexity of this code is O(n^2)
}
