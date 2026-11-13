#include<stdio.h>
#include<stdlib.h>
int RangedisplayRev(int iNo1,int iNo2)
{
    int iCnt=0;
  if(iNo1>iNo2)
  {
    printf("Invalid range\n");
   
  }
    for(iCnt= iNo2;iCnt>=iNo1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue1 = 0,iValue2 =0;
    printf("Enter a number :");
    scanf("%d",&iValue1);

    printf("Enter a number :");
    scanf("%d",&iValue2);

    RangedisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}
