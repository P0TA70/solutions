#include <iostream>
#include <utility>
#include <vector>
#define ll long long int
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (auto &i : a) {
      cin >> i;
    }
    int b[n];
    int b_map[n];
    bool once = 0;
    bool failed = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      if (b[i] == a[i]) {
        if (once || n % 2 == 0) {
          failed = 1;
        }
        once = 1;
        index = i;
      }
      b_map[b[i] - 1] = i;
    }
    if (failed) {
      cout << -1 << endl;
      continue;
    }

    vector<pair<int, int>> moves;
    if (index != -1 && index != (n - 1) / 2) {
      moves.push_back({index + 1, (n + 1) / 2});
      b_map[b[index] - 1] = (n - 1) / 2;
      b_map[b[(n - 1) / 2] - 1] = index;

      swap(a[index], a[(n - 1) / 2]);
      swap(b[index], b[(n - 1) / 2]);
    }

    // in the case of validity

    for (int i = 0; i < n / 2; i++) {
      int pos;

      if (a[i] != b[n - 1 - i]) {
        pos = b_map[a[i] - 1];
        moves.push_back({n - i, pos + 1});
        b_map[b[n - i - 1] - 1] = pos;
        b_map[b[pos] - 1] = n - i - 1;

        swap(a[n - i - 1], a[pos]);
        swap(b[n - i - 1], b[pos]);
      }
    }

    for (int i = 0; i <= n / 2; i++) {
      if (a[i] != b[n - i - 1]) {
        failed = 1;
        break;
      }
    }
    if (failed) {
      cout << -1 << endl;
      continue;
    }

    cout << moves.size() << endl;
    for (auto i : moves) {
      cout << i.first << " " << i.second << endl;
    }
  }
}
