#include <iostream>

using namespace std;

#define ll long long

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }
}
