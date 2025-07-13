#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int m = -1;
  int current = 0;
  int memory = s[0];
  for (auto i : s) {
    if (i == memory) {
      current++;
    } else {
      memory = i;
      m = max(current, m);
      current = 1;
    }
  }
  m = max(current, m);
  cout << m;
}
