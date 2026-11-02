#include<stdio.h>
#include<stdlib.h>
void Displaynumber(int iNo)
{
    int iCount = 0;
    for(iCount=1;iCount<=iNo;iCount++)
    {
        printf("%d\t",iCount);
    }
}
int main()
{
    int iValue = 0;
     printf("Enter a number :");
     scanf("%d",&iValue);

     Displaynumber(iValue);

    return EXIT_SUCCESS;
}
