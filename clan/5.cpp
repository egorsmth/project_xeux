nclude <iostream>
#include <cmath>
#include <map>

using namespace std;

void getCanonical(map<int, int> &m, int a) {
  map<int, int> local;
  int start = 2;
  while (a > 1) {
    if (a % start == 0) {
      if (local.find(start) == local.end()) {
        local[start] = 1;
      } else {
        local[start] += 1;
      }
      a = a / start;
    } else {
      start += 1;
    }
  }

  for (map<int,int>::iterator it=local.begin(); it!=local.end(); ++it)
    if (m.find(it->first) == m.end()) {
      m[it->first] = it->second;
    } else {
      if (m[it->first] < it->second) {
        m[it->first] = it->second;
      }
    }
}

int main() {
  map<int, int> m;
  
  for (int i = 1; i <= 20; i++) {
    getCanonical(m, i);
  }
  long res = 1;
  for (map<int,int>::iterator it=m.begin(); it!=m.end(); ++it)
    res *= pow(it->first, it->second);
  
  cout << res << endl;
}
