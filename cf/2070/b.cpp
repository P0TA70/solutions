#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long k;
    int n, x;
    cin >> n >> x >> k;
    string a;
    cin >> a;

    int test = 0;
    bool loop = 0;
    int loopIndex;
    for (int i = 0; i < n; i++) {
      if (a[i] == 'L')
        test--;
      else
        test++;

      if (test == 0 && i != 0) {
        loop = 1;
        loopIndex = i;
        break;
      }
    }

    int X = x;
    bool reached0 = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 'L')
        X--;
      else
        X++;
      k--;
      if (X == 0) {
        reached0 = 1;
        break;
      }
    }
    if (!reached0) {
      cout << 0 << endl;
    } else {
      if (!loop) {
        cout << 1 << endl;
      } else {
        cout << 1 + k / (loopIndex + 1) << endl;
      }
    }
  }
}
