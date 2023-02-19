// C Program to Print Your Own Name 

#include <stdio.h>
int main(){
    char c[20];
    printf("Enter your name-\n");
    gets(c); //to take input both name and surname //%s can take only one word as input but gets() can take after spaces also
    printf("Your name is %s",c);
}