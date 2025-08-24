#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int k[n];
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> k[i];
    auto it = upper_bound(v.begin(), v.end(), k[i]);
    if (it == v.end()) {
      v.push_back(k[i]);
    } else {
      *it = k[i];
    }
  }
  cout << v.size() << endl;
}
