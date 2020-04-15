#include <stdio.h>
#include <stdlib.h>
#include <syscall.h>

int
main (int argc, char **argv)
{
  if(argc < 2)
    return EXIT_FAILURE;

  int int_argv[4] = {0};
  int i;

  for(i = 0; i < argc - 1 && i < 4; ++i)
    int_argv[i] = atoi(argv[i + 1]);

  printf("modulo	: %d\n", int_argv[0] % int_argv[1]);
  printf("division	: %d\n", int_argv[0] / int_argv[1]);
  printf("mult		: %d\n", int_argv[0] * int_argv[1]);

  float f1 = 3.5;
  float f2 = 1.5;

  printf("float		: %d, %d\n", (int)(f1*10), (int)(f2*10));
  printf("division	: %d\n", (int)((f1 / f2)*100));
  printf("mult		: %d\n", (int)((f1 * f2)*100));
  printf("comp		: %s\n", (f1 > f2)? "TRUE":"FALSE");

  return EXIT_SUCCESS;
}
