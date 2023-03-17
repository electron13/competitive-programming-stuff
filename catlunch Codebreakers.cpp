#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 0; i < n; i++) { ll inp; cin >> inp; v.push_back(inp); }
    ll sum = 0;
    bool t = false;
    while (!v.empty()) {
        vector<ll> a;
        if (v.size() >= k) {
            t = true;
            for (ll i = 0; i < k; i++) {
                if (v[i] >= 0) {
                    sum += v[i];
                    a.push_back(i);
                    t = false;
                }
            }
            if (t == true) { break; }
            for (ll j = 0; j < a.size(); j++) {
                ll s = a[j];
                v.erase(v.begin() + s - j);
            }
        }
        else {
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++) {
                if (v[i] >= 0) { sum += v[i]; }
                else { continue; }
            }
            break;
        }
    }
    cout << sum;
}

int main() {
    solve();
}