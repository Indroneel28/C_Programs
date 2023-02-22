// C Program to Check Leap Year

#include <stdio.h>


//Method 1

int main(int argc, char const *argv[])
{
    int year;
    printf("Enter a year-\n");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0)
                printf("%d is a leap year",year); //2400, 1600, 2000
            else
                printf("%d is not a leap year",year); //2100, 1900
        }
        else
            printf("%d is a leap year",year); //2016, 2020, 2024
    }
    else
        printf("%d is not a leap year",year); // 2015, 2019
    return 0;
}


//Method 2
//More efficient
/*
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year-\n");
    scanf("%d",&year);
    if (year%400==0 || (year%100!=0 && year%4==0))
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);
    return 0;
}
*/
