#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Amount\n");
        return;
    }

    if (fAmount >= 1000)
    {
        fDiscount = fAmount * 0.10f;
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Discount: %.2f\n", fDiscount);
    printf("Final Amount: %.2f\n", fFinalAmount);
}

int main(void)
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
