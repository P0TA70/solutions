#include <iostream>
#include <ostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int dominoes = n / 2 * m;
  if (n % 2) {
    dominoes += m / 2;
  }
  cout << dominoes << endl;
}
