#include <iostream>
#include <vector>

using namespace std;

#define ll long long

void yn(bool b) {
  if (b) {
    cout << "DA\n";
  } else {
    cout << "NET\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    vector<int> a = {1};

    for (int i = 1; i < s.size(); i++) {
      if (s[i] != s[i - 1]) {
        a.push_back(1);
      } else {
        a.back()++;
      }
    }
    bool turn = 0;

    while (a.size() > 1) {
      auto last = a.end() - 1;
      auto secLast = a.end() - 2;

      if (*last == 0 && *secLast == 0) {
        a.pop_back();
        a.pop_back();
      } else if (*last == 0 && *secLast != 0) {
        a.pop_back();
      } else if (*last != 0 && *secLast == 0) {
        auto thirdLast = secLast - 1;
        if (thirdLast < a.begin()) {
          break;
        }
        *thirdLast += *last;
        a.pop_back();
        a.pop_back();
      } else {
        (*last)--;
        (*secLast)--;
        turn ^= 1;
      }
    }
    yn(turn);
  }
}
