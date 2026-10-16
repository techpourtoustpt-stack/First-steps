#include <stdio.h>

int main(void)
{
  int N;
  printf("Enter an integer: ");
  scanf("%d", &N);
  if(N == 0)
  {
    printf("Zero \n");
  }
  else if(N < 0)
  {
    printf("Negative \n");
  }
  else
  {
    printf("Positive \n");
  }
  if(N%2 == 0)
  {
    printf("Even \n");
  }
  else
  {
    printf("Odd \n");
  }
}
