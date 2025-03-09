#include <stdio.h>

int main()
{
  int numbers[] = {5, 10, 25, 5};
  int i;
  float average;
  int sum = 0;

  int length = sizeof(numbers) / sizeof(numbers[0]);

  for (i = 0; i < length; i++)
  {
    sum += numbers[i];
  }

  average = (float)sum / length;

  printf("%.2f\n", average);
  return 0;
}