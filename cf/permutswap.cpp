#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int p;
  cin >> p;
  while (p--) {
    int n;
    cin >> n;
    int perm[n];
    for (int i = 0; i < n; i++) {
      cin >> perm[i];
    }
    vector<int> diff;
    for (int i = 0; i < n; i++) {
      if (!abs(i - perm[i])) {
        diff.push_back(abs(i - perm[i]));
      }
    }
    int answer = diff[0];
    for (int i = 1; i < diff.size(); i++) {
      answer = __gcd(answer, diff[i]);
    }
    cout << answer << endl;
  }
  return 0;
}
