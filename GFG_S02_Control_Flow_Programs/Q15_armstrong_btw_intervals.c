// C Program to Display Armstrong Number Between Two Intervals 

#include <stdio.h>
void main(){
    printf("Enter starting and end point of the interval-\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The armstrong numbers between %d and %d are-\n",a,b);
    for(int i=a; i<=b; i++){
        //we need to check whether i is an armstrong number or not //if yes, then we will print
        int dup=i, count=0, sum=0;
        while(dup!=0){ count++; dup/=10;}
        dup=i;
        while (dup!=0)
        {
            int pro=1;
            for(int i=1; i<=count; i++){
                pro*=dup%10;
            }
            sum+=pro; dup/=10;
        }
        if(sum==i){ printf("%d ",i);}
    }
}