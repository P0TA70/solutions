// C++ Program to Check if a Number is Prime
//  using Square Root
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll n = 998244359987710471;

  ll cnt = 0;

  // If number is less than/equal to 1,
  // it is not prime

  // Check how many numbers divide n in
  // range 2 to sqrt(n)
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      cnt++;
      cout << i;
    }
  }

  // if cnt is greater than 0 then n is
  // not prime
  if (cnt > 0)
    cout << n << " is NOT prime" << endl;

  // else n is prime
  else
    cout << n << " is prime" << endl;

  cout << 998244359987710471 / 998244353;
  return 0;
}
