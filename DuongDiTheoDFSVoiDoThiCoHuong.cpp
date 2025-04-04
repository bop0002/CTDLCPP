#include <bits/stdc++.h>
using namespace std;

stack<int> s;
vector<vector<int>> a;
vector<int> res;
vector<bool> visited;
int v,e,u,t;
bool OK;
void inp()
{
    res.clear();
    OK = false;
    cin>>v>>e>>u>>t;
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
//     if(OK)
//     {
//         return;
//     }
//     if(u==t)
//     {
//         OK = true;
//     }
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
    s.push(u);
    visited[u] = true;
    while(!s.empty())
    {
        int temp = s.top();
        if(temp==t)
        {
            OK = true;
        }
        if(OK)
        {
            res.push_back(s.top());
        }
        s.pop();
        if(!OK)
        {
            for(auto it:a[temp])
            {
                if(!visited[it])
                {
                    visited[it] = true;
                    s.push(temp);
                    s.push(it);
                    break;
                }
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
