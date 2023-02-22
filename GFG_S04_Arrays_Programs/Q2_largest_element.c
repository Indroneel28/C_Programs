#include <stdio.h>
int main(){
    int arr[10]={100,83,79,01,8,238,347,8,89,45};
    int large= arr[0];
    for(int i=0; i< sizeof(arr); i++){
        if(large<arr[i])
            large=arr[i];
    }
    printf("The largest element is %d",large);
}