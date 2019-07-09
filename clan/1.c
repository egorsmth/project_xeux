#include <stdio.h>

typedef long long unsigned llu;

llu res(int n) {
  n -= 1;
  int m = n / 3;
  llu sum = 0;

  for (int i = 1; i <= m; i++) {
    sum += i * 3;
  }

  int m2 = n / 5;

  for (int i = 1; i <= m2; i++) {
    if (i % 3 == 0) continue;

    sum += i * 5;
  }
  return sum;
}

int main() {
  int n;
  scanf("%d", &n);
  
  printf("%llu\n", res(n)); 
  return 0;
}
