#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

ll dp(ll N, ll a[]) {
    vector<ll> v;
    ll sum = 0;
    int j = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] > 0) {
            j = i;
            v.push_back(j + 1);
            break;
        }
    }
    for (int i = j; i < N; i++) {
        sum += a[i];
        if (sum >= 0) {
            v.push_back(i + 1);
        }
    }

    if (v.size() >= 2) {
        return v[v.size() - 1] - v[0] + 1;
    }
    else if (v.empty() == true) {
        return 0;
    }
    else if (v.size() == 1) {
        return 0;
    }

}


void solve() {
    ll a, b;
    cin >> a >> b;
    if (a != 0 && b != 0) {
        cout << 2 * max(abs(a), abs(b)) - 1 << " ";
    }
    else {
        cout << 0 << " ";
    }

}

int main() {
    int t;
    cin >> t;
    for (int u; u < t; u++) {
        solve();
    }
}