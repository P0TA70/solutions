#include <iostream>
using namespace std;

long long p = 1000000007;

long long solve(int x, int n) {
  if (n == 1) {
    return x % p;
  }
  if (n & 1LL) {
    return (solve(x, 1) * solve(x, (n - 1) / 2) * solve(x, (n - 1) / 2)) % p;
  } else {
    return (solve(x, n / 2) * solve(x, n / 2)) % p;
  }
}

int main() {
  // your code goes here
  int n;
  cin >> n;
  cout << solve(2, n) << endl;
  return 0;
}
