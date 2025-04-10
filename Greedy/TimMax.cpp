#include <bits/stdc++.h>
using namespace std;

const long long mod = pow(10,9) + 7;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int res = 0;
        int n;
        cin>>n;
        vector<long long int> a;
        for(int i = 0 ;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        for(int i =0;i<n;i++)
        {
            res+=(a[i]*i)%mod;
        }
        cout<<res%mod<<endl;
    }
}
