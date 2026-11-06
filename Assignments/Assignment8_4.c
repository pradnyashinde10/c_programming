#include<stdio.h>
#include<stdlib.h>
int Table(int iNo)
{ int iCount = 0;
  if(iNo<0)
  {
    iNo = -iNo;
  }
 for(iCount = 1; iCount <= 10; iCount++)s
 {
    printf("%d\n",iNo*iCount);
 }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = Table(iValue);

    return EXIT_SUCCESS;
}
