#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a = n;
  long long sum = 0;
  while (a) {
    a /= 5;
    sum += a;
  }
  cout << sum;
}
