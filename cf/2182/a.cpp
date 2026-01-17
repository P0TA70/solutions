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
    bool c2026 = 0;
    bool c2025 = 0;
    for (int i = 3;i<n;i++) {
      if (s[i-3]=='2' && s[i-2]=='0' && s[i-1]=='2' && s[i]=='6') c2026=1;
      if (s[i-3]=='2' && s[i-2]=='0' && s[i-1]=='2' && s[i]=='5') c2025=1;
    }
    if (c2026==0 && c2025==1) cout << 1 << endl;
    else cout << 0 << endl;
  }
}
