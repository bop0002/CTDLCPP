#include <bits/stdc++.h>
using namespace std;

int n,k;

vector<int> v;
vector<vector<int>> res;
bool OK;

void Init()
{
    OK = true;
    cin>>n>>k;
    v.assign(n,0);
}
void Next()
{
    int i =n-1;
    while(v[i]!=0&&i>=0)
    {
        v[i] = 0;
        i--;
    }
    if(i>=0)
    {
        v[i]=1;
    }
    else OK =false;

}
bool Check()
{
    int cnt =0;
    for(int i=0;i<=n-k;i++)
    {
        if(v[i]==0 && v[i+1]==0 && v[i+2]==0)
        {
            cnt++;
        }
    }
    return cnt==1;
}
int main() {
    Init();
    while(OK)
    {
        if(Check())
        {
            res.push_back(v);
        }
        Next();
    }
    cout<<res.size()<<endl;
    for(auto it:res)
    {
        for(auto itt:it)
        {
            if(itt==0) cout<<'A';
            else cout<<'B';
        }
        cout<<endl;
    }

}   
    
