#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string canRemove(ll x, ll y) {
	if(x > y*2 || y > x*2 || (x+y)%3 != 0) return "NO";
	return "YES";
}

int main() {
	ll n;
	cin >> n;
	for(ll i = 0; i < n; i++) {
		ll x, y;
		cin >> x;
		cin >> y;

		cout << canRemove(x, y) << endl;
	}
	return 0;
}