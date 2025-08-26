#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

void yn(bool a) {
  if (a)
    cout << "yes" << '\n';
  else
    cout << "no" << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    if (b >= a) {
      yn(n % 2 == b % 2);
    } else {
      yn((n % 2 == b % 2 && n % 2 == a % 2));
    }
  }
}
