#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (n == 1) {
      cout << "no" << endl;
      continue;
    }

    int l = 0;
    int h = n - 1;

    bool unequal = 0;
    bool bruh = 0;

    while (l < h) {
      if (s[l + 1] != s[l]) {
        unequal = 1;
      }

      if (s[h] != s[l]) {
        if (s[h] > s[l]) {
          cout << "yes" << endl;
          bruh = 1;
        }
        break;
      }
      if (s[l + 1] != s[l]) {
        unequal = 1;
      }
      l++;
      h--;
    }

    if (bruh) {
      continue;
    }

    if (l >= h) {
      if (!unequal) {
        cout << "no" << endl;
      } else {
        if (k) {
          cout << "yes" << endl;
        } else {
          cout << "no" << endl;
        }
      }
    } else {
      if (k) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    }
  }
}
