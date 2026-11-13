#include<stdio.h>
#include<stdlib.h>
int RangedisplayEven(int iNo1,int iNo2)
{
    int iCnt=0;
  if(iNo1>iNo2)
  {
    printf("Invalid range\n");
   
  }
    for(iCnt= iNo1;iCnt<=iNo2;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
          printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0,iValue2 =0;
    printf("Enter starting number :");
    scanf("%d",&iValue1);

    printf("Enter ending number :");
    scanf("%d",&iValue2);

    RangedisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}
