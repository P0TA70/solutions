#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    int a[n];
    int count0[n];
    int count1[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      count0[i] = count0[i - 1];
      count1[i] = count1[i - 1];
      if (a[i] == 0)
        count0[i]++;
      else
        count1[i]++;
    }
  }
}
