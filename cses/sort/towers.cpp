#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    bool yes = 0;
    for (int i = 1; i < s.length(); i++) {
      if (s[i - 1] == ')' && s[i] == '(') {
        yes = 1;
        break;
      }
    }
    if (yes)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
}
