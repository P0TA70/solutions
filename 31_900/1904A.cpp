#include <iostream>
#include <set>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int xk, yk, xq, yq;
    cin >> xk >> yk >> xq >> yq;

    int count = 0;

    set<pair<int, int>> k, q;
    k.insert({xk + a, yk + b});
    k.insert({xk - a, yk + b});
    k.insert({xk + a, yk - b});
    k.insert({xk - a, yk - b});
    k.insert({xk + b, yk + a});
    k.insert({xk - b, yk + a});
    k.insert({xk + b, yk - a});
    k.insert({xk - b, yk - a});

    q.insert({xq + a, yq + b});
    q.insert({xq - a, yq + b});
    q.insert({xq + a, yq - b});
    q.insert({xq - a, yq - b});
    q.insert({xq + b, yq + a});
    q.insert({xq - b, yq + a});
    q.insert({xq + b, yq - a});
    q.insert({xq - b, yq - a});

    for (auto i : k) {
      for (auto j : q) {
        if (i == j) {
          count++;
        }
      }
    }
    cout << count << '\n';
  }
}
