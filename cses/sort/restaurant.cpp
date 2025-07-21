#include <algorithm>
#include <iostream>
using namespace std;
void solve() {}

int main() {
  int n;
  cin >> n;
  int a[2][n];
  for (int i = 0; i < n; i++)
    cin >> a[0][i] >> a[1][i];

  sort(a[0], a[0] + n);
  sort(a[1], a[1] + n);

  int i1 = 0, i2 = 0;
  int customers = 0;
  int m = 0;
  while (i1 < n || i2 < n) {

    if (i1 < n && i2 < n && a[0][i1] < a[1][i2]) {
      customers++;
      i1++;
    } else {
      m = max(m, customers);
      customers--;
      i2++;
    }
  }

  cout << m << endl;
}
