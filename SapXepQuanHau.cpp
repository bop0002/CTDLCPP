#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<bool> vertical;
vector<bool> diag1;
vector<bool> diag2;
int res;
int lim;
const int n =8;
void Input()
{
    lim = 0;
    res = 0;
    v.assign(n,vector<int>(n));
    vertical.assign(n,true);
    diag1.assign(n*2,true);
    diag2.assign(n*2,true);

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
}

void Try(int x)
{

    if(x==8)
    {
        lim =max(lim,res);
        return;
    }

    for(int i =0;i<n;i++)
    {
        if(vertical[i]&&diag1[x-i+n-1]&&diag2[x+i])
        {
            vertical[i] = false;
            diag1[x-i+n-1] = false;
            diag2[x+i] = false;
            res+=v[x][i];

            Try(x+1);

            vertical[i] = true;
            diag1[x-i+n-1] = true;
            diag2[x+i] = true;
            res-=v[x][i];
            
        }
    }
}

int main() {
    int t;
    cin>>t;
    int cnt =0;
    while(t--)
    {
        cnt++;
        Input();
        Try(0);
        cout<<"Test "<<cnt<<": "<<lim<<endl;
    }

}
    
