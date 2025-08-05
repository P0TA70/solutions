#include <iostream>
#include <map>

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
    string s, t;
    cin >> s >> t;

    map<char, int> count_t;
    map<char, int> count_s;

    for (auto i : t) {
      count_t[i]++;
    }
    for (auto i : s) {
      count_s[i]++;
    }

    string attempt;

    for (auto i : s) {
      if (count_s[i] > count_t[i]) {
        count_s[i]--;
      } else {
        attempt.push_back(i);
      }
    }
    yn(attempt == t);
  }
}
