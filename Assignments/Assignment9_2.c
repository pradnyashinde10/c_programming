#include<stdio.h>
#include<stdlib.h>
int DollarToINR(int iNo)
{
    int iCount = 0;
    iCount = iNo * 70;
    return iCount;

}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR :%d\n",iRet);

    return EXIT_SUCCESS;
}
