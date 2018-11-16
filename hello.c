#include <stdio.h>
void Hello_world(void);
int Values(char, char);

int main (void)
{
  int sum = 0;
  Hello_world();
  sum = Values(1,6);
  printf("\nSum is %d\n", sum);
  return 0;
}
