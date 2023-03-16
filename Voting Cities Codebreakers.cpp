#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>
#include<stdio.h>
#include<limits.h>
#define ll long long
using namespace std;

ll bfs(int n, int t, int e, vector<pair<ll, ll>> adj[], ll p[]) {
    queue<ll> q;
    q.push_back({ 0,t })
        bool visited[n];
    ll distance[n];
    for (int i = 1; i <= n; i++) distance[i] = INF;
    distance[t] = 0;
    vector<ll> v[n];
    while (!q.empty) {
        int s = q.top().second;
        q.pop();
        if (visited[s]) continue;
        visited[s] = true
            for (auto u : adj[s]) {
                int b = u.first, w = u.second;
                if (distance[s] + w < distance[b]) {
                    distance[b] = distance[s] + w;
                    q.push({ -distance[b],b });
                    v[a].push_back(w);
                }
            }
    }
    ll dist = distance[e];
    sort(v[e].begin(), v[e].end());
    ll tot = 0;
    for (int i = 0; i < 5; i++) {
        if (p[4 - i] > 0 && p[4 - i] + v[v.size() - i] * (1 - ((5 - i) / 10) < v[i]) {
            tot += p[i] + v[i] * (1 - (i / 10);
        }

    }
    return tot;
}

void solve() {
    int n, e, k;
    cin >> n >> e >> k;
    ll t[k];
    vector<pair<ll, ll>> adj[n];
    for (int i = 0; i < k; i++) { cin >> t[i]; }
    for (int i = 0; i < e; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({ v,c });
    }
    int s;
    cin >> s;
    ll p[4];
    for (int i = 0; i < 4; i++) { cin >> p[i]; }
    int min = INF;
    for (int i = 0; i < k; i++) {
        if (min > bfs(n, t, s, adj, p)) { min = bfs(n, t, s, adj, p); }
    }
    cout >> min;

}

int main() {
    solve();
}