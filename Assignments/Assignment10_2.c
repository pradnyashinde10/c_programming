#include<stdio.h>
#include<stdlib.h>
double RectAngle(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth*fHeight;
    return dArea;
}

int main()
{
   float fValue1= 0.0f,fValue2 =0.0f;
   double dRet = 0.0;

   printf("Enter width :");
  scanf("%f",&fValue1);

   printf("Enter height:");
   scanf("%f",&fValue2);
   dRet = RectAngle(fValue1,fValue2);
   printf("Area of Rectangle id : %f\n",dRet);
    return EXIT_SUCCESS;
}
