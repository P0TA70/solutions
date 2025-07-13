#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int px, py, qx, qy;
    cin >> px >> py >> qx >> qy;

    vector<int> a(n);
    long long totalsum = 0;
    double displacement = sqrt((py - qy) * (py - qy) + (px - qx) * (px - qx));
    for (auto &i : a) {
      cin >> i;
      totalsum += i;
    }
    sort(a.begin(), a.end());

    // early fails
    if ((double)totalsum <
        displacement) { // case where not enough distance can be covered
      cout << "no" << '\n';
      continue;
    }
    if ((double)totalsum == displacement) {
      cout << "yes" << '\n';
      continue;
    }
    if (n == 1 &&
        (double)totalsum > displacement) { // case when only single move which
      // covers too much distance
      cout << "no" << '\n';
      continue;
    }
    // now when n>2

    bool possible = 0;
    long long sum = 0;
    for (auto i : a) {
      sum += i;
      if (fabs(2 * sum - totalsum) <= displacement) {
        possible = 1;
        break;
      }
    }

    if (!possible) {
      cout << "no" << '\n';
    } else {
      cout << "yes" << '\n';
    }
  }
}
