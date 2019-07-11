#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

const double gl = (1 + sqrt(5))/2;

const double z = (1 - sqrt(5))/2;

double fibn(ull n) {
    return (pow(gl,n) - pow(z, n))/ sqrt(5);
}

int main() {
  double n = 4000000;

  ull ind = 3;
  double sum = 0;
  double cur = fibn(ind);
  while (cur < n) {
    sum += cur;
    ind += 3;
    cur = fibn(ind);
  }

  printf("%f\n", sum);
}
