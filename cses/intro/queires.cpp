#include <iostream>
#define ll long long int
using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    ll k;
    cin >> k;

    ll temp = k;
    ll ten = 1;
    int r = 0;
    while (temp > 0) {
      r++;
      ten *= 10;
      temp -= 9 * (ll)r * ten;
    }
  }
}
