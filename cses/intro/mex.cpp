#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int mex = 0;
      vector<bool> m(205, 0);
      for (int k = 0; k < i; k++) {
        m[a[k][j]] = 1;
      }
      for (int k = 0; k < j; k++) {
        m[a[i][k]] = 1;
      }

      for (int b = 0; b < 205; b++) {
        if (m[b] == 0) {
          mex = b;
          break;
        }
      }
      a[i][j] = mex;
    }
  }

  for (auto i : a) {
    for (int j = 0; j < n; j++) {
      cout << i[j] << " ";
    }
    cout << endl;
  }
}
