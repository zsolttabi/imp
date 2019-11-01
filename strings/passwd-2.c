#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// check OS version
#if !defined(_WIN32) && (defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__)))
#include <unistd.h>
#endif

int main() {
 char password[] = "asd123";

// use 'getpass' utility if available
#if !defined(_WIN32) && (defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__)))
  char *input = getpass("Password: ");
#else
  char input[64];
  char format[8];
  printf("Password: ");
  sprintf(format, "%%%lus", sizeof(input)-1); // restrict max length to `sizeof(input)-1`
  scanf(format, input);
#endif // __unix__

  bool password_mathces = !strcmp(password, input);
  printf("The password is %s\n",
    password_mathces ? "correct" : "not correct");
  return 0;
}
