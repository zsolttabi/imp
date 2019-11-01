#include <stdio.h>
#include <string.h>

int main() {
  char* p = "blabla";
  char s[] = "blabla";

  printf("%s\n", p);
  printf("%s\n", s);

  printf("%lu\n", sizeof(p));
  printf("%lu\n", sizeof(s));

  for (int i = 0; i < strlen(p); ++i) {
    printf("%c", p[i]);
  }
  printf("\n");
  for (int i = 0; i < sizeof(s)-1; ++i) {
    printf("%c", s[i]);
  }
  printf("\n");

  int is_same = strcmp(p, s);
  printf("are they the same? %s\n", is_same == 0 ? "yes" : "no");

  s[0] = 'Z'; // OK
  // p[0] = 'Z'; // runtime error
  return 0;
}
