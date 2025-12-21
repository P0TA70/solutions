#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int l,a,b;
    cin >> l >> a >> b;
    b=b%l;
    int ans = a;
    for (int i =1;i<l;i++) {
	ans = max(ans, (a+i*b)%l);
    }
    cout << ans << endl;
  }
}
