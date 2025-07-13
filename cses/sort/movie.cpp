#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i].second >> a[i].first;

  sort(a.begin(), a.end());

  int current_time = 0;
  int movies = 0;
  for (auto i : a) {
    if (i.second >= current_time) {
      current_time = i.first;
      movies++;
    }
  }
  cout << movies << endl;
}
