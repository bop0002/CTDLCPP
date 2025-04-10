#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;
bool xet[11];
bool Check()
{
    for(int i =0;i<n-1;i++)
    {
        if(abs(v[i]-v[i+1])==1)
        {
            return false;
        }
    }
    return true;
}
void Res()
{
    for(auto it:v)
    {   
        cout<<it;
    }
    cout<<endl;
}
void Input()
{
    cin>>n;
    v.clear();
    for(int i = 1;i<11;i++)
    {
        xet[i] = true;
    }
}

void Try(int i)
{
    for(int j = 1;j<=n;j++)
    {
        if(xet[j])
        {
            v.push_back(j);
            xet[j]=false;
            if(i==n-1)
            {
                if(Check()) Res();
            }
            else
            {
                Try(i+1);
            }
            v.pop_back();
            xet[j] = true;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Input();
        Try(0);
        Res();
    }
}