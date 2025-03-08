#include <stdio.h>

int main()
{
  int numbers[] = {1, 2, 3, 4, 5};
  int i;
  int sum = 0;

  // sizeof return the size of a type in bytes
  int length = sizeof(numbers) / sizeof(numbers[0]);
  
  for (i = 0; i < length; i++)
  {
    sum += numbers[i];
  }

  printf("%d\n", sum);
  return 0;
}