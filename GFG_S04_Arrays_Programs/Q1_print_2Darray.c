// C Program to Print a 2D Array

#include <stdio.h>
//using functions to print the array
void print_array(int arr[3][3]){
    int x= sizeof(arr);
    printf("%d",x);
    for(int i=0; i< x; i++){
        for(int j=0; j< x; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n"); //newline
    }
}
int main(){
    int arr[3][3]={{10,90,20},{60,35,30},{67,12,34}};
    print_array(arr);
}