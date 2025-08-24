#include <iostream>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    int hamid = x - 1;
    int index1 = hamid - 1;
    int index2 = hamid + 1;
    while (index1 >= 0 && s[index1] != '#') {
      index1--;
    }
    while (index2 < n && s[index2] != '#') {
      index2++;
    }
    cout << max(min(hamid + 1, n - index2 + 1), min(index1 + 2, n - hamid))
         << '\n';
  }
}
