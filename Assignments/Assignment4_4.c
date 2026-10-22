#include<stdio.h>
#include<stdlib.h>
void CheckVotingEligibility(int iAge)
{
    if(iAge >=18)
    {
      printf("Eligible for voting");
    }else if(iAge >= 0)
    {
      printf("Not eligible for voting");
    }else
    {
      printf("Invalid Age");
    }   
}
int main()
{
    int iAge = 0;
    printf("Enter ur age:");
    scanf("%d",&iAge);
  
    CheckVotingEligibility(iAge);
  return EXIT_SUCCESS;
}
