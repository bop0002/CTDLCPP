#include <bits/stdc++.h>
using namespace std;

bool OK;
int x[17];
int n;
void Init()
{
    cin>>n;
    OK = true;
    for(int i = 1 ;i<=n;i++)
    {
        x[i] = 1;
    }
}

bool Check()
{
    if(x[1] != 0 || x[n] != 1 )
    {
        return false;
    }
    for(int i = 1;i<n;i++)
    {
        if(x[i]==0 && x[i+1]==0)
        {
            return false;
        }
    }
    return true;
}

void Next()
{
    int i = n;
    while(i>0 && x[i] != 1)
    {
        x[i] = 1;
        i--;
    }
    if(i>0)
    {
        x[i]--;
    }
    else OK = false;
}

void Res()
{
    for(int i = 1;i<=n;i++)
    {
        if(x[i]==0) cout<<"H";
        else cout<<"A";
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
    
