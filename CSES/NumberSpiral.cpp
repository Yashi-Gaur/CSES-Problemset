#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getValue(ll r, ll c) {
	ll val = 0;

	if(r <= c) {
		if(c&1ll) val = c*c - r + 1;
		else val = (c-1)*(c-1) + r;
	}
	else {
		if(r&1ll) val = (r-1)*(r-1) + c;
		else val = r*r - c + 1;
	}
	return val;
}

int main() {
	ll t;
	cin >> t;
	for(ll i = 0; i < t; i++) {
		ll r, c;
		cin >> r;
		cin >> c;
		cout << getValue(r, c) << endl;
	}

	return 0;
}