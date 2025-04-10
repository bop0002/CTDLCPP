#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> visited;
int v, e, u;

void inp() {
    cin >> v >> e >> u;
    visited.assign(v+1,false);
    a.clear();
    a.resize(v + 1);

    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}

void res() {
    for (int i = 1; i <= v; i++) {
        cout << i << ": ";  
        for (int x : a[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

void DFS(int u)
{
    visited[u] = true;
    cout<<u<<" ";
    for(auto it:a[u])
    {
        if(visited[u]==false)
        {
            DFS(it);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        inp();
        DFS(u);
    }
}
