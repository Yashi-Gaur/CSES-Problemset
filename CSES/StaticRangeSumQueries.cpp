#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> sol(vector<int> &nums, vector<vector<int>> &queries, int n, int q) {
	vector<ll> prefixSum(n+1);
	prefixSum[0] = 0;
	for(int i = 0; i < n; i++) {
		prefixSum[i+1] = prefixSum[i] + nums[i];
	}
	vector<ll> ans;
	for(int i = 0; i < q; i++) {
		ans.push_back(prefixSum[queries[i][1] ] - prefixSum[queries[i][0] - 1]);
	}
	return ans;
}

int main() {
	int n, q;
	cin >> n;
    cin >> q;
	vector<int> nums(n);
	vector<vector<int>> queries(q, vector<int> (2));
	for(int i = 0; i < n; i++) cin >> nums[i];
	for(int i = 0; i < q; i++) {
        cin >> queries[i][0];
        cin >> queries[i][1];
    }

	vector<ll> s = sol(nums, queries, n, q);
	for(int i = 0; i < q; i++) {
		cout << s[i] << endl;
	}
	return 0;
}