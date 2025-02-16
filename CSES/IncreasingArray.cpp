#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	ll moves = 0;
	ll pre;
	cin >> pre;
	for(ll i = 1; i < n; i++) {
		ll curr;
		cin >> curr;
		if(curr < pre) { 
			moves += (pre-curr);
			curr = pre;
		}
		pre = curr;
	}
	cout << moves;
	return 0;
}