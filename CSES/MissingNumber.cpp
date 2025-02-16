#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	ll sum = 0;
	for(ll i = 0; i < n-1; i++) {
		ll curr;
		cin >> curr;
		sum += curr;
	}
	int missing = (n*(n+1))/2 - sum;
	cout << missing;
	return 0;
}