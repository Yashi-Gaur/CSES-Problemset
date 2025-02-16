#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, m, k;
	cin >> n;
    cin >> m;
    cin >> k;
	priority_queue<ll, vector<ll>, greater<ll>> p;
	priority_queue<ll, vector<ll>, greater<ll>> a;
	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		p.push(x);
	}
	for(int i = 0; i < m; i++) {
		ll x;
		cin >> x;
		a.push(x);
	}

	int ans = 0;;
	while(!p.empty() && !a.empty()) {
		if(abs(p.top() - a.top()) <= k) {
			ans++;
			p.pop();
			a.pop();
		}	
		else {
			if(p.top() < a.top()) p.pop();
			else a.pop();
		}
	}
    cout << ans;
	return 0;
}