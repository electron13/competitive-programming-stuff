#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

ll traverse(ll g[][1000], ll a, ll b) {
    int p;
    ll max = 0;
    for (int j = 0; j < b; j++) {
        for (int i = 0; i < a; i++) {
            if (i == 0) {
                if (g[i + 1][j] > g[i + 1][j - 1] && g[i + 1][j] > g[i + 1][j + 1] && j - 1 > 0 && j + 1 < b) {
                    p = j;
                    max += g[i + 1][p];
                }
                if (g[i + 1][j - 1] > g[i + 1][j] && g[i + 1][j - 1] > g[i + 1][j + 1] && j - 1 > 0 && j + 1 < b) {
                    p = j - 1;

                    max += g[i + 1][p - 1];
                }
                if (g[i + 1][j + 1] > g[i + 1][j - 1] && g[i + 1][j + 1] > g[i + 1][j] && j - 1 > 0 && j + 1 < b) {
                    p = j + 1;

                    max += g[i + 1][p + 1];
                }
            }
            else {
                if (g[i + 1][p] > g[i + 1][p - 1] && g[i + 1][p] > g[i + 1][p + 1] && p - 1 > 0 && p + 1 < b) {
                    p = p;

                    max += g[i + 1][p];
                }
                if (g[i + 1][p - 1] > g[i + 1][p] && g[i + 1][p - 1] > g[i + 1][p + 1] && p - 1 > 0 && p + 1 < b) {
                    p = p - 1;

                    max += g[i + 1][p];
                }
                if (g[i + 1][j + 1] > g[i + 1][p - 1] && g[i + 1][p + 1] > g[i + 1][p] && p - 1 > 0 && p + 1 < b) {
                    p = p + 1;

                    max += g[i + 1][p];
                }
            }
        }
    }
    return max;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    ll g[a][1000];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            ll inp; cin >> inp;
            g[i][j] = inp;
        }
    }
    cout << traverse(g, a, b);

}

int main() {
    int t = 1;
    for (int u; u < t; u++) {
        solve();
    }
}