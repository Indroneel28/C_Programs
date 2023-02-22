// C Program to Display Armstrong Numbers Between 1 to 1000 

#include <stdio.h>
int main(){
    for(int i=1; i<=1000;i++){
        //we need to check whether i is an armstrong number or not
        int count=0, dup=i;
        while (dup!=0){
            count++; dup/=10;
        }
        dup=i;
        int sum=0;
        while(dup!=0){
            int rem= dup%10, pro=1;
            for(int i=1; i<=count; i++){ pro*= rem;}
            sum+=pro; dup/=10;
        }

        printf("The armstrong numbers between 1 and 1000 are-\n");
        if(sum==i){ printf("%d ",i);}
    }
}