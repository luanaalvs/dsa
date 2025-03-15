#include <stdio.h>

int main()
{
  int numbers[] = {1, 2, 3, 34, 56, 78, 31, 23, 67};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  int i;
  int user_input;
  int found = 0;

  printf("Type a number: \n");
  scanf("%d", &user_input);

  for (i = 0; i < length; i++)
  {
    if (user_input == numbers[i])
    {
      printf("The number %d is in the array.\n", user_input);
      found = 1;
      break;
    }
  }
  
  if (!found)
  {
    printf("The number %d isn't in the array.\n", user_input);
  }

  return 0;
}