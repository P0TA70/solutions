#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int p[n];
    for (auto &i : p) {
      cin >> i;
    }
    int h = n - 1;
    int l = 0;

    bool c = 0;
    vector<char> q(n);
    int index = 0;

    while (l <= h) {
      if (c) {
        if (p[l] < p[h]) {
          q[index] = 'L';
          l++;
        } else {
          q[index] = 'R';
          h--;
        }
      } else {
        if (p[l] > p[h]) {
          q[index] = 'L';
          l++;
        } else {
          q[index] = 'R';
          h--;
        }
      }

      c ^= 1;
      index++;
    }

    for (auto i : q) {
      cout << i;
    }
    cout << '\n';
  }
}
