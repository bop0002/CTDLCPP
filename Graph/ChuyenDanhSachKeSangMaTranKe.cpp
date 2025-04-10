#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int n;
string s;
int x;
void Input()
{
    cin>>n;
    cin.ignore();
    v.assign(n,vector<int>(n));
}
void Solve()
{
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        stringstream ss(s);
        while(ss>>x)
        {
            v[x-1][i] = 1;
        }
    }
    for(auto it:v)
    {
        for(auto itt:it)
        {
            cout<<itt<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Input();
    Solve();
}
    
