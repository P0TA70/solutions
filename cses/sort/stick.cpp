#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int p[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  sort(p, p + n);
  int y = p[n / 2];
  long long cost = 0;
  for (auto i : p) {
    cost += abs(y - i);
  }
  cout << cost << endl;
}
