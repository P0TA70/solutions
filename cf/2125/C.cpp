#include <cmath>
#include <iostream>

using namespace std;

long long multiples(long long l, long long r, long long n) {
  return floor((long double)r / n) - ceil((long double)l / n) + 1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long l, r;
    cin >> l >> r;
    long long anti_count =
        multiples(l, r, 2) + multiples(l, r, 3) + multiples(l, r, 5) +
        multiples(l, r, 7) - multiples(l, r, 6) - multiples(l, r, 10) -
        multiples(l, r, 14) - multiples(l, r, 15) - multiples(l, r, 21) -
        multiples(l, r, 35) + multiples(l, r, 30) + multiples(l, r, 42) +
        multiples(l, r, 70) + multiples(l, r, 105) - multiples(l, r, 210);

    long long count = (r - l + 1) - anti_count;
    cout << count << '\n';
  }
}
