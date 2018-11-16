#include <stdio.h>
void Hello_world(void);
int Values(int, int);

int main (void)
{
  int sum = 0;
  Hello_world();
  sum = Values(2,6);
  printf("\nSum is %d\n", sum);
  return 0;
}
