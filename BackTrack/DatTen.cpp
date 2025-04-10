#include <bits/stdc++.h>
using namespace std;


set<string> st;
vector<string> res;
vector<int> v(31);
int n,k;

void Res()
{
    for(int i =1;i<=k;i++)
    {
        cout<<res[v[i]-1]<<" ";
    }
    cout<<endl;
}

void Try(int i)
{
    for(int j = v[i-1] + 1;j<=n-k+i;j++)
    {
        v[i] = j;
        if(i==k)
        {
            Res();
        }
        else{
            Try(i+1);
        }
    }
}

int main()
{
    cin>>n>>k;
    cin.ignore();
    for(int i =0;i<n;i++)
    {
        string temp;
        cin>>temp;
        st.insert(temp);
    }
    n = st.size();
    res.assign(st.begin(),st.end());
    v[0]=0;
    Try(1);
}
