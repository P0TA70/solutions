#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

void yn(bool a) {
  if (a)
    cout << "yes" << '\n';
  else
    cout << "no" << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool ans = 1;

    if (n >= 5) {
      string helper;
      if (s[0] == '0')
        helper.push_back('u');
      else
        helper.push_back('1');

      for (int i = 1; i < n - 1; i++) {
        if (s[i] == '0') {
          if (s[i - 1] == '0' || s[i + 1] == '0')
            helper.push_back('u');
          else
            helper.push_back('n');
        } else
          helper.push_back('1');
      }

      if (s[n - 1] == '0')
        helper.push_back('u');
      else
        helper.push_back('1');

      for (int i = 0; i < n; i++) {
        if (helper[i] == 'n') {
          if ((i >= 2 && helper[i - 2] == 'u') ||
              (i <= n - 3 && helper[i + 2] == 'u'))
            helper[i] = 'u';
        }
      }
      for (int i = 0; i < n; i++) {
        if (helper[i] == 'n') {
          if ((i >= 2 && helper[i - 2] == 'u') ||
              (i <= n - 3 && helper[i + 2] == 'u'))
            helper[i] = 'u';
          else if ((i >= 2 && helper[i - 2] == 'n')) {
            helper[i - 2] = '1';
            helper[i] = '1';
          } else if ((i <= n - 3 && helper[i + 2] == 'u')) {
            helper[i + 2] = '1';
            helper[i] = '1';
          } else {
            ans = 0;
            break;
          }
        }
      }
    } else {
      if (n == 3 && s == "101")
        ans = 0;
      if (n == 4 && (s == "1011" || s == "1101"))
        ans = 0;
    }
    yn(ans);
  }
}
