#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;


ll mx(ll N, ll a[]) {
	ll max = 0;
	ll id = 0;
	for (int i = 0; i < N - 1; i++) {
		if ((-a[i]) + (-a[i + 1]) > a[i] + a[i + 1] && i + 1 < N - 1) {
			a[i] = -a[i];
			a[i + 1] = -a[i + 1];
			max += a[i];
		}
		else {
			max += a[i];
		}

	}
	max += a[N - 1];
	return abs(max);
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
	ll max = mx(n, a);
	cout << max;
}

int main() {
	int t;
	cin >> t;
	for (int u; u < t; u++) {
		solve();
	}
}