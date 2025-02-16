#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string dna;
	cin >> dna;

	int maxRep = 1;
	int rep = 1;
	for(int i = 1; i < dna.size(); i++) {
		if(dna[i] == dna[i-1]) {
			rep++;
			maxRep = max(maxRep, rep);
		}
		else rep = 1;
	}
	cout << maxRep;
	return 0;
}