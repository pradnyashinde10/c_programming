#include<stdio.h>
#include<stdlib.h>
int TableRev(int iNo)
{ int iCount = 0;
  if(iNo<0)
  {
    iNo = -iNo;
  }
 for(iCount = 10; iCount >= 1; iCount--)
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

    iRet = TableRev(iValue);

    return EXIT_SUCCESS;
}
