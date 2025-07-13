#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  int m = 0;
  long long cost = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m = max(m, a[i]);
    cost += m - a[i];
  }
  cout << cost;
}
