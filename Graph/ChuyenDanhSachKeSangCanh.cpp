#include <bits/stdc++.h>
using namespace std;

set<pair<int,int>> st;
string s;
int a,b;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i =1;i<=n;i++)
    {
        getline(cin,s);
        stringstream ss(s);
        while(ss>>b)
        {
            a = i;
            if(a>b) swap(a,b);
            st.insert(make_pair(a,b));
        }

    }
    for(auto it:st)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    
}