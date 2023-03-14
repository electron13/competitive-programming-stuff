#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;



void solve() {
    int n;
    cin >> n;
    vector<int> adj[1000];
    vector<int> one[1000];
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        if (a != 1 && b != 1) {
            adj[a].push_back(b);

        }
        else if (a == 1) {
            one[a].push_back(b);
        }
        else if (b == 1) {
            one[b].push_back(a);
        }

    }


    int m = 0;

    for (auto k : one[1]) {
        int nodes = 0;
        adj[1].push_back(k);
        queue<int> q;

        bool visited[n]; int distance[n];

        visited[1] = true;
        distance[1] = 0;
        q.push(1);

        while (!q.empty()) {
            int s = q.front();
            q.pop();
            for (auto u : adj[s]) {
                if (visited[u]) continue;
                nodes += 1;

                visited[u] = true;
                distance[u] = distance[s] + 1;
                q.push(u);




            }
        }

        adj[1].pop_back();

        if (nodes > m) {
            m = nodes;

        }
    }





    cout << m - 1;
}

int main() {
    int t;
    cin >> t;
    for (int u = 0; u < t; u++) {
        solve();
    }
}