#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define ll long long
using namespace std;



void solve() {
    int n;
    cin >> n;
    vector<int> adj[n];
    for (int i; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }


    queue<int> q;

    bool visited[n + 5]; int distance[n + 5];
    visited[1] = true;
    distance[1] = 0;
    q.push(1);
    while (!q.empty()) {
        int s = q.front();
        q.pop();
        for (auto u : adj[s]) {
            if (visited[u]) continue;
            //cout<<u<<" ";
            visited[u] = true;
            distance[u] = distance[s] + 1;
            q.push(u);

        }


    }

    int max = 0;

    for (int i = 0; i < n - 1; i++) {
        if (distance[i] > max) {
            max = distance[i];
        }
    }
    cout << max << " ";

}

int main() {
    int t;
    cin >> t;
    for (int u; u < t; u++) {
        solve();
    }
}