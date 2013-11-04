#include <stdio.h>

int main(int argc, char*argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Patrick";
  char full_name[] = {
    'P', 'a', 't', 'r', 'i', 'c', 'k', ' ',
    'S', '.', ' ',
    'S', 'l', 'a', 't', 't', 'e', 'r', 'y', '\0'
  };

  // sometimes you may need to change %ld to %u for unsigned ints

  printf("The size of an int: %ld\n", sizeof(int));
  printf("the size of areas (int[]): %ld\n",
          sizeof(areas));
  printf("The first area is %d, the 2nd %d.\n",
          areas[0], areas[1]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n",
          sizeof(name));
  printf("The number of chars: %ld\n",
          sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n",
          sizeof(full_name));
  printf("The number of chars: %ld\n",
          sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n",
          name, full_name);

  return 0;
}
