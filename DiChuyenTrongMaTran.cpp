#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int c;int r;
int cnt;
void Try(int x, int y)
{
    if(x==r-1&&y==c-1)
    {
        cnt++;
        return;
    }
    if(x<r)
    {
        Try(x+1,y);
    }
    if(y<c)
    {
        Try(x,y+1);
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cnt =0;
        cin>>c>>r;
        v.assign(c,vector<int>(r));
        for(int i = 0;i<c;i++)
        {
            for(int j = 0;j<r;j++)
            {
                cin>>v[i][j];
            }
        }
        Try(0,0);
        cout<<cnt<<endl;
    }
}
