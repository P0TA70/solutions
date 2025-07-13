#include <iostream>

using namespace std;

int main() {
  int p;
  cin >> p;
  while (p--) {
    string s;
    cin >> s;
    s.pop_back();
    s.pop_back();
    if (s.size())
      cout << s;
    cout << "i" << endl;
  }
}
