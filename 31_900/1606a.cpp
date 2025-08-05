#include <iostream>

using namespace std;

#define ll long long

void yn(bool b) {
  if (b) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    char current_required = 'c';
    for (int i = 1; i < s.size(); i++) {
      if (s[i] == current_required) {
        current_required = 'c';
        continue;
      }

      if (s[i - 1] == 'a' && s[i] == 'b') {
        current_required = 'a';
      } else if (s[i - 1] == 'b' && s[i] == 'a') {
        current_required = 'b';
      }
    }

    if (current_required != 'c') {
      s[s.size() - 1] = current_required;
    }

    cout << s << '\n';
  }
}
