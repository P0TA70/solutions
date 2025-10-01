#include <iostream>
#include <vector>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    vector<int> count(n, 0);
    int currStart = 0;
    int prefix = 0;
    int curr = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      count[a[i]]++;
      if (count[a[i]] == a[i]) {
      }
    }
  }
}
