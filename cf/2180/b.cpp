#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> s(n);
        for (auto &i : s)
            cin >> i;
        string ans = s[0];
        for (int i = 1; i < n; i++) {
            int j = 0;
            while (j < ans.size() + s[i].size() &&
                   ans[j % (ans.size())] == s[i][j % (s[i].size())]) {
                j++;
            }
            if (j == ans.size() + s[i].size()) {
                ans = ans + s[i];
            } else if (ans[j % (ans.size())] < s[i][j % (s[i].size())]) {
                ans = ans + s[i];
            } else {
                ans = s[i] + ans;
            }
        }
        cout << ans << '\n';
    }
}
