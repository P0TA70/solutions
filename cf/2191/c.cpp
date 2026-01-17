#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool alice_wins = 0;
        int zero_count = (s[0] == '0');
        for (int i = 1; i < n; i++) {
            zero_count += (s[i] == '0');
            if (s[i - 1] > s[i]) {
                alice_wins = 1;
            }
        }
        if (alice_wins == 0) {
            cout << "Bob\n";
        } else {
            int l = 0;
            int h = n - 1;
            int count = 0;
            set<int> ans;

            while (l < zero_count) {
                if (s[l] == '1') {
                    while (s[h] == '1')
                        h--;
                    count += 2;
                    ans.insert(l + 1);
                    ans.insert(h + 1);
                    h--;
                }
                l++;
            }
            cout << "Alice\n";
            cout << count << '\n';
            for (auto i : ans) {
                cout << i << ' ';
            }
            cout << '\n';
        }
    }
}
