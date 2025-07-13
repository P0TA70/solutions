#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> A, int &count, int index) {
  if (index == 8) {
    count++;
    return;
  }

  for (int i = 0; i < 8; i++) {
    if (A[index][i] == '*')
      continue;

    bool valid = 1;
    for (int j = 0; j < index; j++) {
      if (A[j][i] == 'q') {
        valid = 0;
      }
    }

    for (int j = 1; index - j >= 0 && i - j >= 0; j++) {
      if (A[index - j][i - j] == 'q')
        valid = 0;
    }

    for (int j = 1; index - j >= 0 && i + j < 8; j++) {
      if (A[index - j][i + j] == 'q')
        valid = 0;
    }

    if (valid) {
      A[index][i] = 'q';
      solve(A, count, index + 1);
      A[index][i] = '.';
    }
  }
}

int main() {
  vector<string> A;
  for (int i = 0; i < 8; i++) {
    string current;
    cin >> current;
    A.push_back(current);
  }

  int count = 0;
  solve(A, count, 0);
  cout << count;
}
