#include <bits/stdc++.h>
using namespace std;

int n;
int a[101][101];
bool visited[101];
int cnt;
vector<vector<int>> res;
void Input()
{
    cnt = 0;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
}
void DFS(int u,vector<int> &temp)
{
    visited[u] = true;
    temp.push_back(u);
    for(int i=1;i<=n;i++)
    {
        if(!visited[i]&&a[u][i])
        {
            DFS(i,temp);
        }
    }
}
void Check()
{
    for(int i = 1;i<=n;i++)
    {
        if(!visited[i])
        {
            vector<int> temp;
            cnt++;
            DFS(i,temp);
            res.push_back(temp);
        }
    }
}

int main() {
    Input();
    Check();
    cout<<cnt<<endl;
    for(auto it:res)
    {
        for(auto itt:it)
        {
            cout<<itt<<" ";
        }
        cout<<endl;
    }
 
}
