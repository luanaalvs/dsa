#include <stdio.h>

int main()
{
  int numbers[] = {2, 4, 15, 17, 10, 24};
  int i;
  int even = 0;
  int odd = 0;

  int length = sizeof(numbers) / sizeof(numbers[0]);

  for (i = 0; i < length; i++)
  {
    if (numbers[i] % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }

  printf("Even numbers: %d\n", even);
  printf("Odd numbers: %d\n", odd);

  return 0;
}