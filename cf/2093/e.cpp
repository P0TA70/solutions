#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];
    int numberofzeroes = 0;
    for (auto &i : a) {
      cin >> i;
      if (i == 0)
        numberofzeroes++;
    }
    if (numberofzeroes < k) {
      cout << 0 << endl;
    } else {
    }
  }
}
