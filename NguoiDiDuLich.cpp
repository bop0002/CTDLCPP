#include <bits/stdc++.h>
using namespace std;

int n;
int cac[105][105];
int x[100];
bool visited[105];
int cost=0;
int res =INT_MAX;
int costMin=INT_MAX;
void Input()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<=n;j++)
        {
            cin>>cac[i][j];
            if(cac[i][j]!=0)
            {
                costMin = min(costMin,cac[i][j]);
            }
        }
    }
    memset(visited,false,sizeof(visited));
}

void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(visited[j]==false)
        {
            visited[j] = true;
            x[i] = j;
            cost+= cac[x[i-1]][x[i]];
            if(i==n)
            {
                res = min(res,cost+cac[x[i]][1]);
            }
            else if(cost+(n-i+1)*costMin){
                Try(i+1);
            }
            visited[j] = false;
            cost-=cac[x[i-1]][x[i]];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    x[1] =1;
    visited[1] = true;
    Try(2);
    cout<<res;
}
    
