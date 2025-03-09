#include <stdio.h>

int main()
{
  int numbers[] = {3, 2, 6, 10, 15, 0, 32, 1};
  int i;
  int lowest = numbers[0];
  int highest = numbers[0];

  int length = sizeof(numbers) / sizeof(numbers[0]);

  for (i = 1; i < length; i++)
  {
    if (lowest > numbers[i])
    {
      lowest = numbers[i];
    }

    if (highest < numbers[i])
    {
      highest = numbers[i];
    }
  }

  printf("Lowest number: %d\n", lowest);
  printf("Highest number: %d\n", highest);
  return 0;
}