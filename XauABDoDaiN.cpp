#include <bits/stdc++.h>
using namespace std;

bool OK;
int x[11];
int n;
void Init()
{
    cin>>n;
    OK = true;
    for(int i = 1 ;i<=n;i++)
    {
        x[i] = 0;
    }
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
        if(x[i]==0)
        {
            cout<<"A";
        }
        else if(x[i]==1)
        {
            cout<<"B";
        }
    }
    cout<<" ";
}

int main() {
   int t;
   cin>>t;
   while(t--)
   {
        Init();
        while(OK)
        {
            Res();
            Next();
        }
        cout<<endl;
   }
}
    
