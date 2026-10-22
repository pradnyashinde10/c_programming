#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
  BOOL CheckVowel(char cValue)
  {

    if((cValue =='a') || (cValue == 'A') 
    || (cValue =='e') || (cValue == 'E')
    || (cValue =='i') || (cValue == 'I')
    || (cValue =='o') || (cValue == 'O')
    || (cValue =='u') || (cValue == 'U'))
      {
        return TRUE;
      }else
      { return FALSE;
      }
  }
  int main()
  {
      char cValue = '\0';
      BOOL bRet = FALSE;

      printf("Enter character :");
      scanf("%c",&cValue);

      bRet = CheckVowel(cValue);

      if(bRet == TRUE )
      {
        printf("It is vowel\n");
      }
      else
      {
        printf("It is not vowel\n");
      }
    return 0;
  }
  
