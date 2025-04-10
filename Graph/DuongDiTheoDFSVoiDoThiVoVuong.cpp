#include <bits/stdc++.h>
using namespace std;

int v,e,u,t;
bool OK;
vector<int> a[1001];
bool visited[1001];
stack<int> s;
vector<int> res;
void inp()
{
    res.clear();
    OK = false;
    cin>>v>>e>>u>>t;
    for(int i = 1;i<=v;i++)
    {
        a[i].clear();
        visited[i] = false;
    }
    for(int i = 0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void DFS(int u)
{
    stack<int> s;
    visited[u] = true;
    s.push(u);
    
    while(!s.empty())
    {
        int tmp = s.top();
        s.pop();
        
        if(tmp == y) cnt++;
        
        for(int i = 1; i <= n; i++)
        {
            if(!visited[i] && a[tmp][i])
            {
                p[i] = tmp;
                visited[i] = true;
                s.push(i);
            }
        }
    }
}

void Res()
{
    reverse(res.begin(),res.end());
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        inp();
        DFS(u);
        if(!OK) cout<<"-1";
        else Res();
        cout<<endl;
    }
}
