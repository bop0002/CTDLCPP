#include <bits/stdc++.h>
using namespace std;

int a[101][101];
bool visited[101];
int n,x,y;
int cnt;
vector<int> path;
bool OK;
void Input()
{
    OK = false;
    cnt = 0;
    cin>>n>>x>>y;
    for(int i =1;i<=n;i++)
    {
        visited[i] = false;
    }
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
}
void DFS(int u) {
    visited[u] = true;
    path.push_back(u);

    if (u == y) {
        cnt++;  // Đếm số đường đi
    } else {
        for (int it : a[u]) {
            if (!visited[it]) {
                DFS(it);
            }
        }
    }

    path.pop_back();
    visited[u] = false; // Quay lui
}
int main() {
    int t;
    cin>>t;
    Input();
    DFS(x);
    if(t==1)
    {
        cout<<cnt;
    }
    else
    {
        if(!OK)
        {
            cout<<"0";
        }
        else
        {
            for(auto it:path)
            {
                cout<<it<<" ";
            }
        }   
    }
}
