#include <bits/stdc++.h>
using namespace std;

int n;
vector<bool> vertical;
// vector<bool> horizontal;
vector<bool> diagonal1;
vector<bool> diagonal2;
// vector<vector<int>> v;
int cnt;
int res;
void Input()
{
    res = 0;
    cnt = 0;
    cin>>n;
    vertical.assign(n,true);
    diagonal1.assign(n*2,true);
    diagonal2.assign(n*2,true);
    // v.assign(n,vector<int>(n));
}

void Try(int x)
{
    if(x==n)
    {
        res++;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(vertical[i] && diagonal1[x-i+n-1] && diagonal2[x+i] )
        {
            vertical[i] =false;
            diagonal1[x-i+n-1] =false;
            diagonal2[x+i] = false;
            
            Try(x+1);

            vertical[i] =true;
            diagonal1[x-i+n-1]  =true;
            diagonal2[x+i] = true;
        }


    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        Input();
        Try(0);
        cout<<res<<endl;
    }

}
    
