#include<stdio.h>
#include<stdlib.h>
int Factorial(int iNo)
{
    int iCount = 0;
    int iFact =1;
    if (iNo< 0)
    {
        iNo = -iNo;
    }printf("(");
    for(iCount = iNo;iCount>=1;iCount--)
    { 
        iFact = iCount*iFact;
        printf("%d",iCount);
        if(iCount>1)
        {
            printf("*");
        }
    } printf(")\n");
    return iFact;
     
}

int main()
{
 int iValue = 0,iRet = 0;
  printf("Enter number:");
  scanf("%d",&iValue);
  iRet = Factorial(iValue);
  printf("Factorial of number is :%d",iRet);
  return EXIT_SUCCESS;
}
