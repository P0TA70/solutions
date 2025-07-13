#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;
    bool current = 0;

    long cost = 0;
    if (s[0] == '0') {
      cost = 1;
    } else {
      cost = 2;
    }
    for (int i = 1; i < n; i++) {
      if (s[i] == s[i - 1]) {
        cost++;
      } else {
        cost += 2;
      }
    }
    bool done = 0;

    int h = n / 2;
    int l = h - 1;

    while (l > 0 && h < n - 1) {
      if (s[l] == s[l - 1]) {
        l--;
        continue;
      }
      if (s[h] == s[h + 1]) {
        h++;
        continue;
      }
      if (s[l] != s[h]) {
        cost -= 2;
        done = 1;
        break;
      } else {
        if (l > 1 && s[l - 2] != s[l - 1]) {
          l--;
          cost -= 2;
          done = 1;
          break;
        } else if (h < n - 2 && s[h + 2] != s[h + 1]) {
          h++;
          cost -= 2;
          done = 1;
          break;
        }

        if (l > 1) {
          l--;
        } else if (h < n - 2) {
          h++;
        } else {
          break;
        }
      }
    }

    if (!done) {
      if (s[0] == '1') {
        for (int i = n - 1; i > 0; i--) {
          if (s[i] == '0') {
            cost--;
            done = 1;
            break;
          }
        }
      }
    }

    cout << cost << endl;
  }
}
