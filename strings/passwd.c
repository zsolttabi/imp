#include <stdio.h>
#include <string.h>

int main() {
  char password[] = "asd123";
  char input[64];

  printf("Password: ");
  scanf("%63s", input);

  if (strcmp(password, input) == 0) {
    printf("The password is correct\n");
  } else {
    printf("The password is not correct\n");
  }
}
