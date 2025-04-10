#include <bits/stdc++.h>
using namespace std;

stack<int> s;
vector<vector<int>> a;
vector<bool> visited;
int v,e,u;

void inp()
{
    cin>>v>>e>>u;
    a.clear();
    a.resize(v+1);
    visited.assign(v+1,false);
    for(int i = 0 ;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
    }
}

// void DFS(int u)
// {
//     cout<<u<<" ";
//     visited[u] = true;
//     for(auto it:a[u])
//     {
//         if(visited[it]!=true)
//         {
//             DFS(it);
//         }
//     }
// }

void DFS(int u)
{
    cout<<u<<" ";
    s.push(u);
    visited[u] = true;
    while(!s.empty())
    {
        int temp = s.top();
        s.pop();
        for(auto it:a[temp])
        {
            if(!visited[it])
            {
                cout<<it<<" ";
                visited[it] = true;
                s.push(temp);
                s.push(it);
                break;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        inp();
        DFS(u);
        cout<<endl;
    }
}
