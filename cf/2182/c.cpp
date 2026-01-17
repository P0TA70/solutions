#include <iostream>
#include <vector>

using namespace std;

long long count(vector<long long> &x, vector<long long> &y) {
    long long n = x.size();
    long long count = 0;
    for (long long i = 0; i < n; i++) {
        bool yes = 1;
        for (long long j = i; j < n + i; j++) {
            if (x[j % n] >= y[j - i]) {
                yes = 0;
                break;
            }
        }
        count += yes;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n), c(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        for (auto &i : c)
            cin >> i;
        cout << (n * count(a, b) * count(b, c)) << '\n';
    }
}
