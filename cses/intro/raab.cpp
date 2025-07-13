#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;

    if (a + b > n || a + b == 1 || (a == 0 && b != 0) || (b == 0 && a != 0)) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      vector<int> u, v;
      for (int i = 0; i < n - a - b; i++) {
        u.push_back(n - i);
        v.push_back(n - i);
      }
      int k = a + b;
      for (int i = 1; i <= a; i++) {
        u.push_back(i + b);
        v.push_back(i);
      }
      for (int i = 1; i <= b; i++) {
        u.push_back(i);
        v.push_back(i + a);
      }

      for (auto i : u)
        cout << i << " ";
      cout << endl;
      for (auto i : v)
        cout << i << " ";
      cout << endl;
    }
  }
}
