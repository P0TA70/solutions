#include <algorithm>
#include <climits>
#include <iostream>
#include <sched.h>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (auto &i : a) {
            cin >> i;
        }
        for (auto &i : b) {
            cin >> i;
        }
        long long max_normal = LLONG_MIN;
        long long sum_normal = 0;
        long long M = LLONG_MIN;
        long long sum1 = 0;
        long long sum2 = 0;
        for (int i = 0; i < n; i++) {
            sum1 = sum_normal + a[i] + b[i];
            sum2 = (i == 0) ? a[i] : M + a[i];
            M = max(sum1, sum2);

            // in case of k%2==0
            sum_normal += a[i];
            max_normal = max(max_normal, sum_normal);
            sum_normal = max((long long)0, sum_normal);
        }
        if (k % 2 == 0)
            cout << max_normal << '\n';
        else
            cout << M << '\n';
    }
}
