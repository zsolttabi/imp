#ifndef PERSON_H
#define PERSON_H

#define MAX_NAME_SZ 64

typedef struct person {
  char name[MAX_NAME_SZ];
  int age;
} person_t;

#endif 
