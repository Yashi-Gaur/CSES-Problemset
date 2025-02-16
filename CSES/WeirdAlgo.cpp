#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> getSequence(ll n) {
	vector<ll> sequence = {n};
	while(n != 1) {
		if(n & 1ll) {
			n = n*3 + 1;
		}
		else {
			n >>= 1;
		}
		sequence.push_back(n);
	}
	return sequence;
}

int main() {
	ll n;
	cin >> n;
	vector<ll> sequence = getSequence(n);
	for(long unsigned int i = 0; i < sequence.size(); i++) {
		cout << sequence[i] << " ";
	}
	return 0;
}