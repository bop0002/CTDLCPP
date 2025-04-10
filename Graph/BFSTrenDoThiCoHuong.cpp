#include <bits/stdc++.h>
using namespace std;

int v,e,u;
vector<vector<int>> a;
queue<int> q;
vector<bool> visited;
void Input()
{
    cin>>v>>e>>u;
    visited.assign(v+1,false);
    a.clear();
    a.resize(v+1);

    for(int i =0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
    }
}

void BFS(int i)
{
    visited[i] = true;
    q.push(i);
    while(!q.empty())
    {
        int temp = q.front();
        cout<<temp<<" ";
        q.pop();
        for(auto it:a[temp])
        {
            if(!visited[it])
            {
                visited[it] = true;
                q.push(it);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Input();
        BFS(u);
        cout<<endl;
    }
}
