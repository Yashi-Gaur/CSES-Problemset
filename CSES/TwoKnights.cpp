#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getValue(ll n) {
	ll total = (((n*n)*((n*n)-1))/2); //Total ways to place = nC2
	ll knightsAttack = (n-1)*(n-2)*2*2; //Total attacks is 2* ways to put a 2x3 tile on the board
	ll val = total - knightsAttack;
	return val;
}

int main() {
	ll t;
	cin >> t;
	for(ll i = 1; i <= t; i++) {
		cout << getValue(i) << endl;
	}
	return 0;
}