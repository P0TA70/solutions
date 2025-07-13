#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      a.push_back(pair<int, int>(x, y));
    }
    sort(a.begin(), a.end());
    int total = 0;
    for (int i = 1; i < n; i++) {
      if (a[i].first == a[i - 1].first) {
        total += n - 2;
        bool frontcontains1 = 0;
        bool frontcontains0 = 0;
        bool backcontains0 = 0;
        bool backcontains1 = 0;
        if ((a[i + 1].first == a[i + 2].first) &&
            a[i + 1].first == a[i].first + 1) {
          frontcontains0 = 1;
          frontcontains1 = 1;
        } else if (a[i + 1].first != a[i + 2].first &&
                   a[i + 1].first == a[i].first + 1) {
          if (a[i + 1].first) {
            frontcontains1 = 1;
          } else {
            frontcontains0 = 1;
          }
        }
        if ((a[i - 2].first == a[i - 3].first) &&
            a[i - 2].first == a[i].first - 1) {
          backcontains0 = 1;
          backcontains1 = 1;
        } else if (a[i - 2].first != a[i - 3].first &&
                   a[i - 2].first == a[i].first - 1) {
          if (a[i - 2].first) {
            backcontains1 = 1;
          } else {
            backcontains0 = 1;
          }
        }

        if (backcontains0 && frontcontains0) {
          total++;
        }
        if (frontcontains1 && backcontains1) {
          total++;
        }
      }
    }
    cout << total << endl;
  }
}
