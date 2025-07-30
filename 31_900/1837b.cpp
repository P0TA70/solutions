#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    char current = s[0];
    int max_count = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] == current) {
        count++;
      } else {
        current = s[i];
        max_count = max(max_count, count);
        count = 1;
      }
    }
    max_count = max(max_count, count);
    cout << max_count + 1 << endl;
  }
}
