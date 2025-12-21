#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> prefix(n);
        for (int i = 0; i < n; i++)
            prefix[i] = i + 1;
        prefix[r - 1] = l - 1;
        vector<int> ans(n);
        ans[0] = prefix[0];
        for (int i = 1; i < n; i++)
            ans[i] = prefix[i] ^ prefix[i - 1];
        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }
}
