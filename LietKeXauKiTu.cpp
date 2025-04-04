#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;

void Res()
{
    for(int i =1;i<=n;i++)
    {
        cout<<char(v[i]+'A');
    }
    cout<<endl;
}
void Try(int c,int i)
{
    for(int j = v[i-1];j<=c;j++)
    {
        v.push_back(j);
        if(i==n) Res();
        else
        {
            Try(c,i+1);
        }
        v.pop_back();
    }
}

int main()
{
    char c;
    cin>>c;
    cin>>n;
    v.push_back(0);
    Try(int(c-'A'),1);
}