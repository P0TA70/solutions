#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n];
  bool first_loop = 1;

  long long maxEnding = 0;
  long long result = 0;
  for (auto &i : x) {
    cin >> i;
    if (first_loop) {
      maxEnding = i;
      result = i;
      first_loop = 0;
      continue;
    }

    maxEnding = max(i + maxEnding, (long long)i);
    result = max(result, maxEnding);
  }
  cout << result << endl;
}
