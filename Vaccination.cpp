#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;




void solve() {
	int n, k, d, w;
	cin >> n >> k >> d >> w;
	int tot = 0;
	for (int i = 0; i < n; i++) {
		int inp;
		cin >> inp;
		tot += inp;
	}
	int r = tot % d;
	int f = r + (tot - r) / d;
	int sum = n + f;
	int s = sum % k;
	int fin = s + (sum - s) / k;
	cout << fin << " ";

}

int main() {
	int t;
	cin >> t;
	for (int u; u < t; u++) {
		solve();
	}
}