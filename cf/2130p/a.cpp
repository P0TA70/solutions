#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int n0 = 0;
    int n1 = 0;
    long long sum = 0;
    for (auto &i : a) {
      cin >> i;
      if (i == 0)
        n0++;
      else if (i == 1)
        n1++;
      else
        sum += i;
    }

    if (n0 < n1) {
      sum += n0 * 2 + (n1 - n0);
    } else {
      sum += n1 * 2 + (n0 - n1);
    }
    cout << sum << endl;
  }
}
