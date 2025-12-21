#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        map<int, int> freq;
        for (auto &i : a) {
            cin >> i;
            freq[i]++;
        }
        long long score = 0;
        int odd_count = 0;
        int even_count = 0;
        for (auto i : freq) {
            if (i.second % 2 == 0) {
                score += 2;
                if (i.second % 4 == 0)
                    even_count++;
            } else {
                score++;
                odd_count++;
            }
        }
        if (even_count % 2 != 0 && odd_count==0)
            score -= 2;
        cout << score << '\n';
    }
}
