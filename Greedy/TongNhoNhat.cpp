#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        vector<char> v;
        for(int i = 0;i<n;i++)
        {
            char temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());

        for(int i = 0;i<n;i++)
        {
            if(v[i]!='0')
            {
                if(i%2==0) a+=v[i];
                else b+=v[i];
            }
        }
        cout<<stol(a)+stol(b)<<endl;

    }
}
