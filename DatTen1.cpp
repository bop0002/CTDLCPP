#include <bits/stdc++.h>
using namespace std;

int x[31];
int n,k;
set<string> st;
vector<string> v;
void Init()
{
    cin>>n>>k;
    for(int i = 0;i<n;i++)
    {
        string s;
        cin>>s;
        st.insert(s);
    }
    v.assign(st.begin(),st.end());
    n = v.size();
}

void Res()
{
    for(int i =1;i<=k;i++)
    {
        cout<<v[x[i]-1]<<" ";
    }
    cout<<endl;
}
void Try(int i)
{
    for(int j = x[i-1]+1;j<=n;j++)
    {
        x[i] = j;
        if(i==k)
        {
            Res();
        }
        else Try(i+1);
    }
}
int main() {
    Init();
    x[0] = 0;
    Try(1);

}
    
