#include<stdio.h>
#include<stdlib.h>
void CheckleapYear(int iYear)
{
    if(((iYear % 400) == 0) || ((iYear % 4 == 0) && (iYear % 100!= 0)))
    {
        printf("%d is a leap year\n",iYear);
    }else{
        printf("%d is not a leap year\n",iYear);
    }
}
int main()
{
    int iYear = 0;
    printf("Enter year :");
    scanf("%d",&iYear);
    
    CheckleapYear(iYear);

    return EXIT_SUCCESS;

}
