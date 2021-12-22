#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
  if (argc != 2) {
    fprintf(stderr, "usage: %s STR\n", argv[0]);
    return 1;
  }

  char* vals = calloc(strlen(argv[1]), 1);
  memcpy(vals, argv[1], strlen(argv[1]));

  for (size_t i = 1; i < strlen(argv[1]); ++i) {
    vals[i] ^= vals[i-1];
  }

  printf(
      "#include <cstdio>\n"
      "template<int a,int...b>"
      "struct c{void d(){putchar(a);c<a^b...>{}.d();}};\n"
      "template<int e>struct c<e>{void d(){putchar(e);}};\n"
      "int main(){c<");

  for (size_t i = 0; i < strlen(argv[1]); ++i) {
    if (i > 0) printf(",");
    printf("%#hho", vals[i]);
  }

  printf(">{}.d();}");

  free(vals);

  return 0;
}
