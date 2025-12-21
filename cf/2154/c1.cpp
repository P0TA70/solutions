#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
#define ll unsigned long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        sort(a.begin(), a.end());
        vector<ll> lcprefix(n);
        lcprefix[0] = a[0];
        for (int i = 1; i < n; i++) {
            lcprefix[i] = lcm(lcprefix[i - 1], a[i]);
        }
        vector<ll> lcsuffix(n);
        lcsuffix[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            lcsuffix[i] = lcm(lcsuffix[i + 1], a[i]);
        }

        // check 0
        bool passed = 0;
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                ll lc = lcprefix[i - 1];
                if (gcd(lc, a[i]) > 1) {
                    passed = 1;
                    break;
                }
            }
            if (i < n - 1) {
                ll lc = lcsuffix[i + 1];
                if (gcd(lc, a[i]) > 1) {
                    passed = 1;
                    break;
                }
            }
        }
        if (passed) {
            cout << 0 << '\n';
            continue;
        }

        // check 1;
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                ll lc = lcprefix[i - 1];
                if (gcd(lc, a[i] + 1) > 1) {
                    passed = 1;
                    break;
                }
            }
            if (i < n - 1) {
                ll lc = lcsuffix[i + 1];
                if (gcd(lc, a[i] + 1) > 1) {
                    passed = 1;
                    break;
                }
            }
        }
        if (passed) {
            cout << 1 << '\n';
            continue;
        }

        cout << 2 << '\n';
    }
}
