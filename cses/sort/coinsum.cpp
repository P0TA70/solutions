#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n];
  for (auto &i : x) {
    cin >> i;
  }
  sort(x, x + n);
  long long sum = 0;
  for (auto i : x) {
    if (i > sum + 1) {
      break;
    }
    sum += i;
  }
  cout << sum + 1 << endl;
}
