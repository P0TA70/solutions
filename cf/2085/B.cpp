#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int finalLength = n;
    vector<vector<int>> steps;

    int i;
    for (i = n - 1; i > 0; i--) {
      if (a[i] == 0) {
        steps.push_back({i, i + 1});
        i--;
        finalLength--;
      }
    }

    if (i != -1) {
      if (a[0] == 0) {
        steps.push_back({1, 2});
        finalLength--;
      }
    }

    cout << steps.size() + 1 << endl;

    for (auto i : steps) {
      cout << i[0] << " " << i[1] << endl;
    }
    cout << 1 << " " << finalLength << endl;
  }
}
