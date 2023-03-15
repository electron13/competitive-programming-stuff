#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;



void solve() {
    int n, c;
    cin >> n >> c;
    vector<ll> coins;
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        coins.push_back(inp);
    }
    vector<ll> dp(c + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= c; i++) {
        for (ll j = 0; j < n; j++) {
            if (i - coins[j] >= 0) {
                dp[i] += dp[i - coins[j]];
            }
        }
    }
    cout << dp[c];

}



int main() {
    int t;
    cin >> t;
    for (int u = 0; u < t; u++) {
        solve();
    }
}