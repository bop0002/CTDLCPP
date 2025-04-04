#include <bits/stdc++.h>
using namespace std;

int v,e,u,t;
vector<int> a[1001];
bool b[1001];
int parent[1001];
void Input()
{
    cin>>v>>e>>u>>t;
    for(int i = 1;i<=v;i++)
    {
        b[i] = false;
        a[i].clear();
        parent[i] = 0;
    }
    for(int i = 0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}

void BFS(int i)
{
    queue<int> q;
    q.push(i);
    b[i] = true;
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(auto it:a[temp])
        {
            if(!b[it])
            {
                parent[it] = temp;
                q.push(it);
                b[it] = true;
            }
        }
    }
}

void Res()
{

    if(b[t]==false)
    {
        cout<<"-1"<<endl;
        return;
    }

    vector<int> path;
    for(int cur = t;cur!=u;cur=parent[cur])
    {
        path.push_back(cur);
    }
    path.push_back(u);
    reverse(path.begin(),path.end());
    for(auto it:path)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Input();
        BFS(u);
        Res();
    }
}
