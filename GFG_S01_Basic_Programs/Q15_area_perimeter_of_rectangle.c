// C Program for Area And Perimeter Of Rectangle 

#include <stdio.h>
int main(){
    float length, breadth;
    printf("Enter the length of the rectange-\n");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle-\n");
    scanf("%f",&breadth);
    printf("The area of the rectangle is %f\n",length*breadth);
    printf("The perimeter of the rectangle is %f\n",2*(length+breadth));
}