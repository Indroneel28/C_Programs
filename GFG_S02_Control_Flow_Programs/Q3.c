// C Program to Check Whether a Character is Vowel or Consonant 

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter a character- ");
    scanf("%c",&c);
    if (c=='a'||c=='e'||c=='i'||c=='u'|| c=="o"|| c=='A'||c=='E'||c=='I'||c=='U'|| c=="O")
        printf("%c is a vowel",c);
    else
        printf("%c is a consonant",c);
    return 0;
}
