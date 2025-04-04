#include <bits/stdc++.h>
using namespace std;

int v,e;
vector<int> a[1001];
int visited [1001];

void Input()
{
    cin>>v>>e;
    for(int i=0;i<e;i++)
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
    visited[i] = true;
    while(!q.empty())
    {
        int temp = q.front();
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
int Check()
{
    int cnt =0;
    for(int i =1;i<=v;i++)
    {
        if(!visited[i])
        {
            cnt++;
            BFS(i);
        }
    }
    return cnt;
}
void Clear()
{
    for(int i =1;i<=v;i++)
    {
        a[i].clear();
        visited[i] = 0;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {

        Input();
        cout<<Check()<<endl;
        Clear();
    }
}
