#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int n;
void Input()
{
    cin>>n;
    v.assign(n,vector<int>(n));
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
}
void Solve()
{
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(v[i][j]==1)
            {
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    Input();
    Solve();
}
    
