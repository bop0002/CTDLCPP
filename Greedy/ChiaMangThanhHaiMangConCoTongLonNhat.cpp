#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i = 0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int ans = 0;
        if(n-k<k)
        {
            for(int i = 0;i<k;i++) ans+=v[i];
            for(int i = k;i<n;i++) ans-=v[i];
        }
        else
        {
            for(int i = 0;i<k;i++) ans-=v[i];
            for(int i = k;i<n;i++) ans+=v[i];
        }
        cout<<ans<<endl;
    }
}
