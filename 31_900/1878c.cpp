#include <iostream>

using namespace std;

void ans(bool b) {
  if (b) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k, x;
    cin >> n >> k >> x;
    long long l = k * (k + 1) / 2;
    long long h = n * k - k * (k - 1) / 2;

    if (x >= l && x <= h) {
      ans(1);
    } else {
      ans(0);
    }
  }
}
