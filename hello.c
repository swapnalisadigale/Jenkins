#include <stdio.h>
void Hello_world(void);
void Values(char, char);

int main (void)
{
  int sum = 0;
  Hello_world();
  sum = Values(5,6);
  printf("\nSum is %d\n", sum);
  return 0;
}
