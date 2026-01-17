#include <iostream>
#include <vector>

using namespace std;

void answer(bool a) {
    if (a) cout << "yes\n"; else cout << "no\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int zero = 0;
        int one = 0;
        for (auto &i : a) {
            cin >> i;
            if (i == 0)
                zero += 1;
            if (i == 1)
                one += 1;
        }
        if (zero==0 || (zero>1 && one==0)){
            answer(0);
        } else {
            answer(1);
        }
    }
}
