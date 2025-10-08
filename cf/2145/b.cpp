#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char a[n];
    for (auto &i : a)
      i = '+';
    int l1 = 0;      // starting index of ?
    int llength = 0; // length of ?
    int h1 = n - 1;  //"starting" (reverse) index of ?
    int hlength = 0; // length of ?

    for (auto i : s) {
      if (h1 == l1) {
        a[l1] = '-';
        break;
      }

      if (i == '0') {
        a[l1] = '-';
        if (llength != 0 || a[l1 + 1] == '?') {
          if (l1 + llength <= h1 - hlength)
            a[l1 + llength] = '?';
          else
            llength = h1 - hlength - l1;
        }
        l1++;
      } else if (i == '1') {
        a[h1] = '-';
        if (hlength != 0 || a[h1 - 1] == '?') {
          if (h1 - hlength >= l1 + llength)
            a[h1 - hlength] = '?';
          else
            hlength = h1 - l1 - llength;
        }
        h1--;
      } else {
        if (l1 + llength <= h1 - hlength) {
          a[l1 + llength] = '?';
          a[h1 - hlength] = '?';
          llength++;
          if (l1 + llength != h1 - hlength)
            hlength++;
        } else {
          hlength = h1 - l1 - llength;
        }
      }
    }

    for (auto i : a) {
      cout << i;
    }
    cout << '\n';
  }
}
