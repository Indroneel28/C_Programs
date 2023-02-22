//efficient program //gfg
/*
We can simply calculate the sum of individual digits by dividing the number by 10 and getting reminders. 
And if it will be equal to the number itself then it is an Armstrong number. 
Here time complexity will be reduced to O(log(n)).
*/

// Armstrong number or not using Sum 
// of Digits
#include <stdio.h>
  
// Driver code
int main()
{
    int n;
    printf("Enter the number-\n");
    scanf("%d",&n);
    int temp = n;
    int p = 0;
  
    // Calculating the sum of individual digits
    while (n > 0) {
        int rem = n % 10;
        p = (p) + (rem * rem * rem);
        n = n / 10;
    }
  
    // Condition to check whether the
    // value of P equals to user input
    // or not.
    if (temp == p) {
        printf("Yes. It is Armstrong No.");
    }
    else {
        printf("No. It is not an Armstrong No.");
    }
    return 0;
}

//IMPORTANT- THIS CODE IS ONLY VALID FOR NUMBERS HAVING THREE DIGITS OR LESS
//SO, IT IS NOT THE BEST CODE AS WE WERE EXPECTING