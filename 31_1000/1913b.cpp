#include <iostream>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    int last_index = -1;
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') {
        zeroCount++;
      } else {
        oneCount++;
      }
      if (zeroCount == oneCount) {
        last_index = i;
        zeroCount = 0;
        oneCount = 0;
      }
    }
    if (last_index == n - 1) {
      cout << 0 << '\n';
    }
    for (int i = last_index + 1; i < n; i++) {
      if (s[i] == '1') {
        zeroCount--;
      } else {
        oneCount--;
      }
      if (zeroCount < 0 || oneCount < 0) {
        cout << zeroCount + oneCount + 1 << '\n';
        break;
      }
    }
  }
}
