
#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if(iCount % 2 != 0)
        {
            printf("%d\t", iCount);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    DisplayOdd(iValue);

    return EXIT_SUCCESS;
}
