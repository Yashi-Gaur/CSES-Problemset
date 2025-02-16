#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n;
	cin >> n;

	if(n == 1) {
		cout << 1;
	}
	else if(n < 4) {
		cout << "NO SOLUTION";
	}
	else {
		for(ll i = 2; i <= n; i+=2) {
			cout << i << " ";
		}
		for(ll i = 1; i <= n; i+=2) {
			cout << i << " ";
		}
	}
	return 0;
}

// int main() {
// 	ll n;
// 	cin >> n;

// 	if(n == 1) {
// 		cout << 1;
// 	}
// 	else if(n < 4) {
// 		cout << "NO SOLUTION";
// 	}
// 	else {
// 		deque<ll> dq;

// 		dq.push_back(3);
// 		dq.push_back(1);
// 		dq.push_back(4);
// 		dq.push_back(2);

// 		for(ll i = 5; i <= n; i++) {
// 			if(i&1ll) dq.push_back(i);
// 			else dq.push_front(i);
// 		}

// 		cout << dq.front();
// 		dq.pop_front();
// 		while(!dq.empty()) {
// 			cout << " " << dq.front();
// 			dq.pop_front();
// 		}
// 	}
// 	return 0;
// }