#include<stdio.h>
void DisplayFactor(int iNo)
{
  int i = 0;
   if(iNo<= 0)
    {
     iNo = -iNo;
    }
  for(i=1; i<=iNo; i++)
    {
  if(iNo % i ==0)
    {
    printf("%d\t",i)
    }
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number :\n");
  scanf("%d",&iValue);
  DisplayFactpr(iValue);
return 0;
}
