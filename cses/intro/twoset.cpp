#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if ((n * (n + 1)) % 4) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    if (n % 4 == 0) {
      cout << n / 2 << endl;
      for (int i = 1; i <= n / 4; i++) {
        cout << i << " ";
      }
      for (int i = n - n / 4 + 1; i <= n; i++) {
        cout << i << " ";
      }
      cout << endl;
      cout << n / 2 << endl;
      for (int i = n / 4 + 1; i <= n - n / 4; i++) {
        cout << i << " ";
      }
      cout << endl;
    } else {
      cout << (n + 1) / 2 << endl;
      for (int i = 1; i <= (n + 1) / 4; i++) {
        cout << i << " ";
      }
      for (int i = (3 * n - 1) / 4; i <= n - 1; i++) {
        cout << i << " ";
      }
      cout << endl;
      cout << (n - 1) / 2 << endl;
      for (int i = (n + 1) / 4 + 1; i <= (3 * n - 5) / 4; i++) {
        cout << i << " ";
      }
      cout << n << endl;
    }
  }
}
