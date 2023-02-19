// C Program to Find the Size of int, float, double, and char

#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("The size of int is %d\n",sizeof(int));
    printf("The size of float is %d\n",sizeof(float));
    printf("The size of double is %d\n",sizeof(double));
    printf("The size of char is %d\n",sizeof(char));
    // in c programming char takes 1 byte but in java char takes 2 bytes
    return 0;
}
