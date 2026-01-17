#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> depth(n);
        depth[0] = 1;
        cout << 1 << ' ';
        for (int i = 1; i < n; i++) {
            if (s[i] == '(')
                depth[i] = depth[i - 1] + 1;
            else
                depth[i] = depth[i - 1] - 1;

            cout << depth[i] << ' ';
        }
        cout << '\n';
    }
}
