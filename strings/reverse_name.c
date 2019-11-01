#include <stdio.h>

int main() {
  char name[10] = "Zsolt";
  for (int i = sizeof(name)-1; i >= 0; --i) {
    printf("%c", name[i]);
  }
  printf("\n");
  return 0;
}
