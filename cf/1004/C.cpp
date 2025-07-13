#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool containsSeven(long long a) {
  bool contains = 0;
  while (a) {
    if (a % 10 == 7) {
      contains = 1;
      break;
    }
    a /= 10;
  }
  return contains;
}
int main() {
  int p;
  cin >> p;

  while (p--) {
    int n;
    cin >> n;

    int c = n;
    int digits = 0;
    while (c) {
      digits++;
      c /= 10;
    }

    vector<long long> a(digits, n);
    vector<int> count(digits, 0);

    long long k = 9999999999;
    while (digits < 10) {
      k /= 10;
      digits++;
    }

    int i = 0;
    while (k) {
      while (!containsSeven(a[i])) {
        a[i] += k;
        count[i]++;
      }
      k /= 10;
      i++;
    }
    int min = *min_element(count.begin(), count.end());
    cout << min << endl;
  }
}
