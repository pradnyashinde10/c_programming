#include<stdio.h>
#include<stdlib.h>
double CircleArea(float fRadius)
{
    double dArea = 0.0;
    const float PI = 3.14f;

    if(fRadius <0)
    {
        fRadius = -fRadius;
    }
    dArea = PI*fRadius*fRadius;
    return dArea;
}

int main()
{
 float fValue =0;
 double dRet =  0;
  printf("Enter a number :");
  scanf("%f",&fValue);

  dRet = CircleArea(fValue);
  printf("Area of circle is :%.41f\n",dRet);

    return EXIT_SUCCESS;
}
