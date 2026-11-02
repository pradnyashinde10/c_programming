#include<stdio.h>
#include<stdlib.h>
void pattern(int iNo)
{
    int iCount = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCount=0;iCount<=iNo;iCount++)
    {
        printf("$\t*\t",iCount);
    }
}
int main()
{
    int iValue = 0;
     printf("Enter a number :");
     scanf("%d",&iValue);

     pattern(iValue);

    return EXIT_SUCCESS;
}
