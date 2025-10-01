#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
      cout << i << ' ';

    cout << n << ' ';
    for (int i = 1; i < n; i++)
      cout << i << ' ';
    cout << '\n';
  }
}
