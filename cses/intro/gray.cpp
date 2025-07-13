#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> gray(int n) {
  if (n == 1) {
    return {{0}, {1}};
  }

  vector<vector<bool>> prev = gray(n - 1);
  vector<vector<bool>> prev_rev = prev;
  reverse(prev_rev.begin(), prev_rev.end());

  for (int i = 0; i < prev.size(); i++) {
    prev[i].push_back(0);
  }
  for (int i = 0; i < prev_rev.size(); i++) {
    prev_rev[i].push_back(1);
  }

  prev.insert(prev.end(), prev_rev.begin(), prev_rev.end());

  return prev;
}

int main() {
  int n;
  cin >> n;

  vector<vector<bool>> ans = gray(n);
  int size = ans[0].size();

  for (auto i : ans) {
    for (int j = size - 1; j >= 0; j--) {
      cout << i[j];
    }
    cout << endl;
  }
}
