#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	ll total = n*(n+1)/2;
	if(total & 1ll) cout << "NO";
	else {
		cout << "YES" << endl;

		ll half = n/2;
		vector<ll> firstHalf;
		vector<ll> secondHalf;
		for(ll i = 1; i <= half; i++) {
			if(i & 1ll) firstHalf.push_back(i);
			else secondHalf.push_back(i);
		}
		for(ll i = half+1; i <= n; i++) {
			if(i & 1ll) secondHalf.push_back(i);
			else firstHalf.push_back(i);
		}

		cout << firstHalf.size() << endl;
		for(ll i: firstHalf) cout << i << " ";
		cout << endl;
		cout << secondHalf.size() << endl;
		for(ll i: secondHalf) cout << i << " ";
	}
	return 0;
}