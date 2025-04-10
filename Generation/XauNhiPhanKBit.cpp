#include <bits/stdc++.h>
using namespace std;

bool OK;
int x[17];
int n;
int k;
void Init()
{
    cin>>n>>k;
    OK = true;
    for(int i = 1 ;i<=n;i++)
    {
        x[i] = 0;
    }
}

bool Check()
{
    int cnt = 0;
    for(int i = 1;i<=n;i++)
    {
        if(x[i]==1)
        {
            cnt++;
        }
    }
    return cnt==k;
}

void Next()
{
    int i = n;
    while(i>0 && x[i] != 0)
    {
        x[i] = 0;
        i--;
    }
    if(i>0)
    {
        x[i]++;
    }
    else OK = false;
}

void Res()
{
    for(int i = 1;i<=n;i++)
    {
        cout<<x[i];
    }
    cout<<endl;
}

int main() {
   int t;
   cin>>t;
   while(t--)
   {
        Init();
        while(OK)
        {
            if(Check()) Res();
            Next();
        }
        cout<<endl;
   }
}
    
