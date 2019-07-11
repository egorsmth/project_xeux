#include <stdio.h>

int is_prime(long n) {
     if (n <= 3) {
        return n > 1;
     } else if (n % 2 == 0 || n % 3 == 0) {
        return 0;
     }

     long i = 5;
     while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
        i += 6;
     }
     return 1;
}

int main() {
  long n = 13195;
  if (is_prime(n)) {
     printf("%ld", n);
     return n;
  }
  long i = 2;
  
  while ((int)n/2 != i) {
    if (n % i != 0) {
      i += 1;
      continue;
    }
    if (is_prime(n/i)) {
      printf("%ld", n/2);
      return n/i;
    }
    i+=1;
  }
  return -1;
}
