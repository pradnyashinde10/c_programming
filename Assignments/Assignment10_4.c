#include<stdio.h>
#include<stdlib.h>
double fhtoCs(float fTemp)
{
double dCelsius = 0.0;
dCelsius = (fTemp - 32)*(5.0/9.0);
return dCelsius;
}

int main()
{   float fValue = 0.0f;
    double dRet =0.0;
    printf("Enter temp in fahrenheit:");
    scanf("%f",&fValue);
    dRet = fhtoCs(fValue);
    printf("fh to Cs is :%f\n",dRet);
    return EXIT_SUCCESS;
}
