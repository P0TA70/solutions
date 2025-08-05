#include <cmath>
#include <iostream>

using namespace std;

#define ll long long

int factorsOfk(int n, int k) {
  int count = 0;
  while (n % k == 0) {
    n = n / k;
    count++;
  }
  return count;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int factorsOf2 = factorsOfk(n, 2);
    int factorsOf3 = factorsOfk(n, 3);
    ll new_n = n;
    if (factorsOf2 > factorsOf3) {
      cout << -1 << '\n';
    } else {
      new_n /= pow(2, factorsOf2);
      new_n /= pow(3, factorsOf3);
      if (new_n != 1) {
        cout << -1 << '\n';
      } else {
        cout << (factorsOf3 - factorsOf2) + factorsOf3 << '\n';
      }
    }
  }
}
