#include <bits/stdc++.h>
using namespace std;

bool OK;
int x[17];
int n;
void Init()
{
    cin>>n;
    OK = true;
    for(int i = n ;i>=1;i--)
    {
        x[i] = 1;
    }
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
        x[i]=0;
    }
    else OK = false;
}

bool Check()
{
    if(x[1]!=0  || x[n] !=1 ) return false;
    for(int i = 1;i<n;i++)
    {
        if(0==x[i+1] && x[i] == 0 ) return false;
    }
    for(int i = 3;i<n-1;i++)
    {
        if(x[i-1]==1&&x[i]==1&&x[i+1]==1&&x[i+2]==1 || x[i-1]==1&&x[i]==1&&x[i+1]==1&&x[i-2]==1   ) return false;
    }
    return true;

}
void Res()
{
    for(int i = 1;i<=n;i++)
    {
        if(x[i]==0)
        {
            cout<<"8";
        }
        else if(x[i]==1)
        {
            cout<<"6";
        }
    }
    cout<<endl;
}

int main() {

    Init();
    while(OK)
    {
        if(Check()) Res();
        Next();
     }
     cout<<endl;

}
    
