#include <iostream>
#include <ostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    bool isBad = 0;
    for (int i = 0; i < n; i++) {
      int temp = a[i];
      a[i] -= i;
      if (a[i] == 0) {
        isBad = 1;
        break;
      }
      a[i] = temp;
      for (int j = 0; j < i; j++) {
        a[j]--;
        if (a[j] == 0) {
          isBad = 1;
          break;
        }
      }
    }
    if (isBad) {
      std::cout << "no" << std::endl;
      continue;
    }
    int b[n];
    for (int i = 0; i < n; i++) {
      b[i] = a[n - 1 - i];
    }

    for (int i = 0; i < n; i++) {
      b[i] -= i;
      if (b[i] == 0) {
        isBad = 1;
        break;
      }
      for (int j = 0; j < i; j++) {
        b[j]--;
        if (b[j] == 0) {
          isBad = 1;
          break;
        }
      }
    }
    if (isBad) {
      std::cout << "no 1" << std::endl;
    } else {
      std::cout << "yes" << std::endl;
    }
  }
}
