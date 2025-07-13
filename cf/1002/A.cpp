#include <iostream>
#include <map>

using namespace std;

int main() {
  int p;
  cin >> p;
  for (int t = 0; t < p; t++) {
    int n;
    cin >> n;
    int a[n], b[n];
    map<int, int> mapa;
    int dista = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (!mapa[a[i]]) {
        mapa[a[i]] = 1;
        dista++;
      } else {
        mapa[a[i]]++;
      }
    }
    map<int, int> mapb;
    int distb = 0;
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      if (!mapb[b[i]]) {
        mapb[b[i]] = 1;
        distb++;
      } else {
        mapb[b[i]]++;
      }
    }
    if (dista >= 3 || distb >= 3) {
      cout << "yes" << endl;
    } else {
      if (dista == 1 || distb == 1) {
        cout << "no" << endl;
      } else {
      }
    }
  }
}
