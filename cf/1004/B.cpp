#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int p;
  cin >> p;

  while (p--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
  }
}
