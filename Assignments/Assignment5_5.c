#include <stdio.h>
#include <stdlib.h>
void CheckCharacter(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}
int main(void)
{
    char ch = '\0';

    printf("Enter character: ");
    scanf(" %c", &ch);

    CheckCharacter(ch);

    return EXIT_SUCCESS;
}
