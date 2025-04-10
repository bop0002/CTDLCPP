#include <bits/stdc++.h>
using namespace std;

int n;
int k;
bool OK;
vector<int> x;
void Init()
{
    OK = true;
    x.clear();
    cin>>n>>k;
    for(int i = 1 ; i<=k;i++)
    {
        x.push_back(i);
    }
}

void Next()
{
    
}

void Res()
{
    for(auto it:x)
    {
        cout<<char('@'+it);
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
            Res();
            Next();
        }
        cout<<endl;

    }
}
    
