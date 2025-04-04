#include <bits/stdc++.h>
using namespace std;

int v,e;
vector<vector<int>> a;
void Solve()
{
    cin>>v>>e;
    for(auto it:a)
    {
        it.clear();
    }
    a.resize(v+1);
    for(int i =  1;i<=e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        // a[y].push_back(x); vo huong
    }
    for(int i =1;i<=v;i++)
    {
        cout<<i<<": ";
        for(auto it:a[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    // cin.tie(0); ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
}
    
