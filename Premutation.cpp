#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;


void solve() {
	ll n;
	cin >> n;
	ll a[3][10000];
	vector<ll> v;
	int idx;
	for (int i; i < 2; i++) {

		for (int j = 0; j < n - 1; j++) {
			int inp;
			cin >> inp;
			a[i][j] = inp;

		}


	}


	for (int j; j < n - 1; j++) {
		if (a[0][j] != a[1][j]) {
			idx = j;
			break;
		}

	}
	if (idx != 0) {
		for (int m = 0; m < idx + 1; m++) {

			cout << a[0][m];
		}
		for (int m = idx; m < n - idx + 1; m++) {
			cout << a[1][m];
		}
	}

	else {
		ll b;
		cin >> b;
		if (b == a[0][0]) {
			cout << a[0][0];
			for (int y; y < n - 1; y++) {
				cout << a[1][y];
			}
		}
		else {
			cout << a[1][0];
			for (int y; y < n - 1; y++) {
				cout << a[0][y];
			}
		}
	}






}

int main() {
	int t;
	cin >> t;
	for (int u; u < t; u++) {
		solve();
	}
}

}

int main() {
	int t;
	cin >> t;
	for (int u; u < t; u++) {
		solve();
	}
}