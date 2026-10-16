#include <stdio.h>
int main(void)
{
  int A, B, C, Temp;

  printf("Enter three integers: \n");
  scanf("%d %d %d", &A, &B, &C);
  if(B > A)
  {
    Temp = A;
    A = B;
    B = Temp;
  }
  if(C > A)
  {
    Temp = A;
    A = C;
    C = Temp;
  }
  if(C > B)
  {
    Temp = B;
    B = C;
    C = Temp;
  }
  printf("Sorted descending: %d %d %d \n", A, B, C);
}
