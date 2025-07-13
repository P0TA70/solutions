#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    char a[n][4];
    for (int i = 0; i < n; i++) {
      cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    }
    for (int i = n - 1; i >= 0; i--) {
      for (int j = 0; j < 4; j++) {
        if (a[i][j] == '#') {
          cout << j + 1 << " ";
          break;
        }
      }
    }
    cout << endl;
  }
}
