
#include <stdio.h>

// global, definition, external linkage
int i;

// global, definition, internal linkage
static int j;

// global, definition, external linkage
int arr[10] = {1};

// global, definition, external linkage
int not_a_pointer[1] = {12};

void print_info() {
  printf("in 'a.c'\n");
  printf("&not_a_pointer: %p\n", (void*)&not_a_pointer); // remove the cast and try to compile with -Werror -pedantic 
  printf("not_a_pointer: %p\n", (void*)not_a_pointer);
  printf("&not_a_pointer[0]: %p\n", (void*)&not_a_pointer[0]);
  printf("not_a_pointer[0] %d\n", not_a_pointer[0]);
}

void f() {
  printf("j = %d\n", j);
  arr[0] = 42;
}
