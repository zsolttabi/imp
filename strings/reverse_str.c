#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "abcdef";
  int n = strlen(str);
  int i;
  char tmp;
  for (i = 0; i < n/2; ++i) {
    tmp = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = tmp;
  }
  printf("%s\n", str);
}
