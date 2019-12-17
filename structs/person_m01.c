#include <stdio.h>

#include "person.h"

void print_person(const struct person * p) {
  printf("person { name: %s, age: %d }\n", (*p).name, p->age);
}

void swap(person_t * p1, person_t * p2) {
  person_t tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

void sort_by_age(person_t * people, int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = i; j > 0 && people[j-1].age > people[j].age; --j) {
      swap(&people[j-1], &people[j]);
    }
  }
}

int main() {

  person_t ppl[] = { {"Mary", 22}, {"Tom", 40}, { .name = "Peter", .age = 19} };

  sort_by_age(ppl, sizeof(ppl)/sizeof(person_t));

  for (int i = 0; i < sizeof(ppl)/sizeof(person_t); ++i) {
    print_person(&ppl[i]);
  }

  struct person p;
  printf("name: ");
  scanf("%63s", p.name);

  printf("age: ");
  scanf("%d", &p.age);

  print_person(&p);

  return 0;
}
