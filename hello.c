#include <stdio.h>
void Hello_world(void);
int Sum_numbers(int ,int );

int main (void)
{
  int sum = 0;
  Hello_world();
  sum = Sum_numbers(10,20);
  printf("\nSum is %d\n", sum);
  return 0;
}
