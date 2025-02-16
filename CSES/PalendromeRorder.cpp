#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string makePalendrome(string s) {
	unordered_map<char, ll> letters;
	for(long unsigned int i = 0; i < s.size(); i++) {
		letters[s[i]]++;
	}
	char odd = '0';
	string ans = "";
	for(auto i: letters) {
		if(i.second & 1ll) {
			if(odd == '0') odd = i.first;
			else return "NO SOLUTION";
		}
		else {

			for(ll j = 0; j < i.second/2; j++) {
				ans += i.first;
			}
		}
	}
	string rev = ans;
	reverse(rev.begin(), rev.end());
	if(odd != '0') {
		for(ll j = 0; j < letters[odd]; j++) {
			ans += odd;
		}
	}
	ans += rev;
	return ans;
}

int main() {
	string s;
	cin >> s;
	cout << makePalendrome(s);
	return 0;
}