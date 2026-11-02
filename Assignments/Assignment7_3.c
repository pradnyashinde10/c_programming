#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    int iCount = 0;
    for(iCount=-iNo;iCount<=iNo;iCount++)
    {
        printf("%d\t",iCount);
    }
}
int main()
{
    int iValue = 0;
     printf("Enter a number :");
     scanf("%d",&iValue);

     Display(iValue);

    return EXIT_SUCCESS;
}
