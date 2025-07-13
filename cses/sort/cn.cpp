#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int x[n];
  map<int, int> m1;

  for (int i = 0; i < n; i++) {
    cin >> x[i];
    m1[x[i]] = i;
  }

  int rounds = 1;
  for (int i = 2; i <= n; i++) {
    if (m1[i] < m1[i - 1])
      rounds++;
  }

  for (int i = 0; i > m; i++) {
    int a, b;
    cin >> a >> b;

    m1[x[a]] = b;
    m1[x[b]] = a;
    swap(x[a], x[b]);
  }
}
