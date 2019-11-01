#include <stdio.h>

// global, only declaration, definition is in 'a.c'
extern int i;

// global, **only declaration**, external linkage
// note: 'int arr[0] = {1};' would not link
int arr[10];

// global, only declaration, invalid type
extern int *not_a_pointer;

void foo(int t[] /* 'int*'' */, unsigned len) {
  printf("len = %u\n",
   len);
  *t = 4; // <==> t[0] = 4
}

void g(double *); // declaration


void g(double * dp) { // definition
  // ...
}

int main() {

  void f(); // declaration
  f(); // function call, modifies 'arr'

  printf("arr[0] = %d\n", arr[0]);

  int i = 42;
  int * ip = &i;
  int ** ipp = &ip;
  int *** ippp = &ipp;

  printf("i: %d\n", i);
  printf("ip: %p\n", (void*)ip);
  printf("ipp: %p\n", (void*)ipp);
  printf("ippp: %p\n", (void*)ippp);

//      | ... |
// i:   | 42  | <- 101   &i: 101
// ip:  | 101 | <- 102  &ip: 102 
// ipp: | 102 | <- 103 &ipp: 103
// ippp:| 103 | <- 104 &ippp: 104

  void print_info();  // declaration
  print_info();

  printf("in 'b.c'\n");
  printf("&not_a_pointer: %p\n", (void*)&not_a_pointer);
  printf("not_a_pointer: %p\n", (void*)not_a_pointer);
  printf("&not_a_pointer[0]: %p\n", (void*)&not_a_pointer[0]);

  printf("not_a_pointer[0] %d\n", not_a_pointer[0]); // undefined behaviour

  return 0;
}
