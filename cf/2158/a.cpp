#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, y, r;
        cin >> n >> y >> r;
        cout << min(n, (y / 2 + r)) << '\n';
    }
}
