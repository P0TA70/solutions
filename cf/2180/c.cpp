#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
	  int n,k;
	  cin >> n >> k;
	  if (k%2!=0) {
	  	int temp = k;
		while (temp--) cout << n << ' ';
		cout << '\n';
	  } else {
		int temp = k-2;
		while (temp--) cout << n << ' ';

		//for last two numbers
		vector<bool> n_bin;
		int tem=n;
		while(tem) {
			n_bin.push_back(tem%2);
			tem/=2;
		}
		bool one_found=0;
		int a=1<<n_bin.size()-1;
		int b=0;
		for (int i = n_bin.size()-2; i>=0;i--) {
			if (!one_found) {
				if (n_bin[i]==1) {
					one_found=1;
					b+=1<<i;
				}
			} else {
				if (n_bin[i]==0) {
					a+=1<<i;
				}
				b+=1<<i;
			}
		}
		cout << a << ' ' << b << '\n';
	  }
  }
}
