#include <stdio.h>

int main() {
  long n = 600851475143;

  long b = 2;
  
  long m = 1;
  while (n > 1) {
    if (n % b == 0) {
      n = n / b;
      if (b > m) m = b;
    } else {
      b += 1;
    }
  }
 
  printf("%ld", m);
}
