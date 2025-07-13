#include <iostream>

using namespace std;

int main() {
  int p;
  cin >> p;
  while (p--) {
    string s;
    cin >> s;
    int ans = -1;
    for (int i = s.size() - 1; i >= 1; i--) {
      if (s[i] == s[i - 1]) {
        ans = 1;
        break;
      }
    }
    if (ans == -1) {
      cout << s.size() << endl;
    } else {
      cout << ans << endl;
    }
  }
}
