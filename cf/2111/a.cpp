#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;

    int a = 0, b = 0, c = 0;
    int *min = &a;
    int *mid = &b;
    int *max = &c;

    int count = 2;
    while (a != x && b != x && c != x) {
      *min += 2 * *mid - *min + 1;
      if (*min > x) {
        *min = x;
      }

      if (a <= b && b <= c) {
        min = &a;
        mid = &b;
        max = &c;
      } else if (a <= c && c <= b) {
        min = &a;
        mid = &c;
        max = &b;

      } else if (b <= a && a <= c) {
        min = &b;
        mid = &a;
        max = &c;

      } else if (b <= c && c <= a) {
        min = &b;
        mid = &c;
        max = &a;

      } else if (c <= a && a <= b) {
        min = &c;
        mid = &a;
        max = &b;

      } else if (c <= b && b <= a) {
        min = &c;
        mid = &b;
        max = &a;
      }

      count++;
    }
    cout << count << endl;
  }
}
