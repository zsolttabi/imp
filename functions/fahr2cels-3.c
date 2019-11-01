#include <stdio.h>

double fahr2cels(int fahr);

int main()
{
  int fahr;
  for (fahr = -100; fahr <= 400; fahr += 25)
  {
    printf( "Fahr = %d\t,Cels = %f\n", fahr, 
      fahr2cels(fahr) );
  }
  return 0;
}

double fahr2cels(int fahr) {
  return 5./9.*(fahr-32);
}
