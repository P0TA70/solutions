#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> l(n);
  vector<int> r(n);
  vector<int> p(n);
  vector<int> q(n);

  vector<int> cells(m, 0);
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i] >> p[i] >> q[i];
  }
}
