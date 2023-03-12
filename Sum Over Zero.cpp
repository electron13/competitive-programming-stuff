#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

ll dp(ll N, ll a[]) {
	vector<ll> v;
	ll sum = 0;
	for (int i = 0; i < N; i++) {
		sum += a[i];
		if (sum >= 0) {
			v.push_back(i + 1);
		}
	}
	if (v.size() >= 2) {
		cout << v[v.size() - 1] - v[0] + 1;
	}
	else if (v.size() == 0 || v.size() == 1) {
		cout << 0;
	}

}


void solve() {
	ll n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
		int inp;
		cin >> inp;
		a[i] = inp;
	}
	dp(n, a);


}

int main() {
	int t = 1;
	for (int u; u < t; u++) {
		solve();
	}
}