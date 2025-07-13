#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<bool>> &a, string s, int &count, int index, int x,
           int y) {

  if (index == 48) {
    if (x == 0 && y == 6) {
      for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
          if (!(a[i][j])) {
            return;
          }
        }
      }
      count++;
      return;
    }
  }

  if (s[index] != '?') {
    switch (s[index]) {
    case 'R':
      if (x < 6 && !a[x + 1][y]) {
        a[x + 1][y] = 1;
        solve(a, s, count, index + 1, x + 1, y);
        a[x + 1][y] = 0;
      }
    case 'L':
      if (x > 0 && !a[x - 1][y]) {
        a[x - 1][y] = 1;
        solve(a, s, count, index + 1, x - 1, y);
        a[x - 1][y] = 0;
      }
    case 'U':
      if (y > 0 && !a[x][y - 1]) {
        a[x][y - 1] = 1;
        solve(a, s, count, index + 1, x, y - 1);
        a[x][y - 1] = 0;
      }
    case 'D':
      if (y < 6 && !a[x][y + 1]) {
        a[x][y + 1] = 1;
        solve(a, s, count, index + 1, x, y + 1);
        a[x][y + 1] = 0;
      }
    }
  } else {
    if (x < 6 && !a[x + 1][y]) {
      a[x + 1][y] = 1;
      solve(a, s, count, index + 1, x + 1, y);
      a[x + 1][y] = 0;
    }
    if (x > 0 && !a[x - 1][y]) {
      a[x - 1][y] = 1;
      solve(a, s, count, index + 1, x - 1, y);
      a[x - 1][y] = 0;
    }
    if (y > 0 && !a[x][y - 1]) {
      a[x][y - 1] = 1;
      solve(a, s, count, index + 1, x, y - 1);
      a[x][y - 1] = 0;
    }
    if (y < 6 && !a[x][y + 1]) {
      a[x][y + 1] = 1;
      solve(a, s, count, index + 1, x, y + 1);
      a[x][y + 1] = 0;
    }
  }
}

int main() {
  string s;
  cin >> s;

  vector<vector<bool>> a(7, {0, 0, 0, 0, 0, 0, 0});
  a[0][0] = 1;

  int count = 0;
  solve(a, s, count, 0, 0, 0);
  cout << count;
}
