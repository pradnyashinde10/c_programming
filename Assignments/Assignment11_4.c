#include<stdio.h>
#include<stdlib.h>
int DisplaySumEven(int iNo1,int iNo2)
{
    int iCnt=0;
    int iSum = 0;

  if((iNo1>iNo2)|| (iNo1<=0) || (iNo2<=0))
  {
    printf("Invalid range\n");
    exit(0);
  }

    for(iCnt= iNo1;iCnt<=iNo2;iCnt++)
    {
        if(iCnt%2 ==0)
        {
         iSum = iSum + iCnt;
        }
       
    } return iSum;
}
int main()
{
    int iValue1 = 0,iValue2 =0;
    int iRet = 0;
    printf("Enter a number :");
    scanf("%d",&iValue1);

    printf("Enter a number :");
    scanf("%d",&iValue2);

    iRet = DisplaySumEven(iValue1,iValue2);
    printf("Addition is %d",iRet);

    return EXIT_SUCCESS;
}
