#include <bits/stdc++.h>
using namespace std;

int v,e;
vector<vector<int>> a;
int x,y;
void Solve()
{
    cin>>v>>e;
    a.assign(v,vector<int>());
    for(int i = 0;i<e;i++)
    {
       cin>>x>>y;
       a[x-1].push_back(y); 
    }
    for(int i = 0;i<v;i++)
    {
        cout<<i+1<<": ";
        for(auto it:a[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
}
    
