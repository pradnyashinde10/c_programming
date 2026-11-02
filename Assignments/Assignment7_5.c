
#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCount = 1;

    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("%d\t", iNo * iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

     MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}
