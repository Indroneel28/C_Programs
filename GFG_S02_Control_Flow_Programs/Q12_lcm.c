// C Program to Find LCM of Two Numbers

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers whose LCM you want-\n");
    scanf("%d %d",&a,&b);
    int LCM= a;
    while(1){
        if(LCM%a==0 && LCM%b==0) {printf("The LCM of %d and %d is %d",a,b,LCM); break;}
        LCM++;
    }
}