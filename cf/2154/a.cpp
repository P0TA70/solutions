#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int first_one = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                first_one = i;
                break;
            }
        }
        if (first_one == -1) {
            cout << 0 << '\n';
            continue;
        }
        int count = 1;
        int quota = k - 1;
        for (int i = first_one + 1; i < n; i++) {
            if (quota <= 0 && s[i] == '1')
                count++;
            if (s[i] == '0')
                quota--;
            else
                quota = k - 1;
        }
        cout << count << '\n';
    }
}
