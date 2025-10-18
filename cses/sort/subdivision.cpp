#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<ll> a(n),prefix(n);
    ll count = 0;
    for (int i = 0;i<n;i++) {
        cin >> a[i];
        prefix[i]=(i>0 ? prefix[i-1] : 0) + a[i];
        if (prefix[i]%n==0) count++;
    }
}
