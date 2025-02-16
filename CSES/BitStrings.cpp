#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll m = 1e9 + 7;
	ll n;
	cin >> n;
	ll num = 2;
	ll res = 1;

	while(n) {
		if(n&1ll) res = (res*num)%m;
		num = (num*num)%m;
		n >>= 1;
	}
	cout << res;
	return 0;
}