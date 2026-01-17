#include <cmath>
#include <iostream>
#include <utility>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        pair<int, int> pos[20] = {{1, 0}};
        for (int i = 1; i < 20; i++) {
            pos[i] = pos[i - 1];
            if (i % 2) {
                pos[i].second += pow(2, i);
            } else {
                pos[i].first += pow(2, i);
            }
        }
        int ans = 0;
        while ((a >= pos[ans].first && b >= pos[ans].second) ||
               (a >= pos[ans].second && b >= pos[ans].first))
            ans++;
        cout << ans << endl;
    }
}
