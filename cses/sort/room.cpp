#include <algorithm>
#include <iostream>
#include <set>
#include <utility>
#include <vector>
#include <tuple>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<tuple<int,int, int>> a(n);

  for (int i = 0; i < n; i++) {
      cin >> get<0>(a[i]) >> get<1>(a[i]); get<2>(a[i])=i;
  }
  sort(a.begin(), a.end());
  int next = 2;
  set<int> rooms = {1};
  set<pair<int, int>> customers;
  int i = 0;
  vector<pair<int, int>> ans;
  while (i<n) {
      if (!customers.empty() && customers.begin()->first < get<0>(a[i])) {
          rooms.insert(customers.begin()->second);
          customers.erase(customers.begin());
      } else {
          if (rooms.empty()) {
              customers.insert({get<1>(a[i]), next});
              ans.push_back({get<2>(a[i]), next});
              next++;
          } else {
              customers.insert({get<1>(a[i]), *rooms.begin()});
              ans.push_back({get<2>(a[i]), *rooms.begin()});
              rooms.erase(rooms.begin());
          }
          i++;
      }
  }
  sort(ans.begin(), ans.end());
  set<int> count;
  for (auto i : ans) count.insert(i.second);
  cout << count.size() << '\n';
  for (auto i : ans) cout << i.second << ' ';
}
