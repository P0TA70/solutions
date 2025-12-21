#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;

        map<char, int> t_freq;
        for (auto i : t) {
            t_freq[i]++;
        }
        for (auto i : s) {
            t_freq[i]--;
        }
        bool imp = 0;
        for (auto i : t_freq) {
            if (i.second < 0) {
                imp = 1;
                break;
            }
        }
        if (imp) {
            cout << "Impossible\n";
            continue;
        }
        string ans;
        int current_s = 0;
        for (auto i : t_freq) {
            char current = i.first;
            int count = i.second;
            while (current_s < s.size() && s[current_s] <= current) {
                ans.push_back(s[current_s]);
                current_s++;
            }
            while (count--) {
                ans.push_back(current);
            }
        }
        cout << ans << '\n';
    }
}
