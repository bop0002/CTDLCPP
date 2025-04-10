#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> v;
set<vector<int>> st;
int n;int k;
bool found;
void Res()
{
    st.insert(v);
}
void Try(int i,int sum)
{
    if(sum>k) return;
    if(sum==k)
    {
        Res();
        found = true;
        return;
    }
    for(int j = i;j<n;j++)
    {
   
        v.push_back(a[j]);
        Try(j+1,sum+a[j]);
        v.pop_back();
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        found = false;
        v.clear();
        st.clear();
        a.clear();
        cin>>n>>k;
        for(int i = 0 ;i<n;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        Try(0,0);
        if(!found) cout<<"-1";
        else
        {
            for(auto it:st)
            {
                cout<<"[";
                for(int i =0;i<it.size();i++)
                {
                    cout<<it[i];
                    if(i!=it.size()-1) cout<<" ";
                }
                cout<<"] ";
            }
        }
        cout<<endl;
    }   
}
