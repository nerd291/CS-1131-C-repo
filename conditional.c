#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("clear");
  int numerator = 30;
  int denominator = 10;
  
  switch (numerator / denominator)
  {
  case 6:
    printf("we are inside case value = 6.");
    break;
  case 3:
    printf("we are inside case value = 3.");
    break;
  default:
    printf("None of the cases matched, printing default.");
    break;

    }

    printf("\n");

    return 0;
}