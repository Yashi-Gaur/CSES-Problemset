#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	ll ans = 0;
	for(ll i = 5; n/i >= 1; i *= 5) {
		ans += n/i;
	}

	cout << ans;
	return 0;
}