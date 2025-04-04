#include <bits/stdc++.h>
using namespace std;

int v,e;
vector<vector<int>> a;
vector<bool> visited;
void Input()
{
    cin>>v>>e;
    visited.assign(v+1,false);
    a.clear();
    a.resize(v+1);
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
                visited[it] = true;
                s.push(temp);
                s.push(it);
                break;
            }
        }
    }

}

int Check()
{
    int cnt =0;
    for(int i =1;i<=v;i++)
    {
        if(!visited[i])
        {
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}

void Res()
{

}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        Input();
        cout<<Check();
    }
}
