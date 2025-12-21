#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        int M = 0;
        for (int i = 0; i < n; i++) {
            M = max(M, a[i]);
            if ((i + 1) % 2 == 0) {
                a[i] = M;
            }
        }
        long long count = 0;
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 != 0) {
                int m;
                if (i == 0)
                    m = a[1];
                else if (i == n - 1)
                    m = a[n - 2];
                else
                    m = min(a[i - 1], a[i + 1]);
                if (a[i] >= m)
                    count += a[i] - m + 1;
            }
        }
        cout << count << '\n';
    }
}
