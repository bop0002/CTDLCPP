#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
void Res()
{
    cout<<"(";
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i];
        if(i!=v.size()-1) cout<<" ";
    }
    cout<<") ";
}

void Try(int j,int plus)
{
    for(int i=j;i>=1;i--)
    {
        v.push_back(i);
        plus+=i;
        if(plus==n)
        {
            Res();
        }
        else if(plus<n)
        {
            Try(i,plus);
        }
        v.pop_back();
        plus-=i;

    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        Try(n,0);
        v.clear();
        cout<<endl;
    }
}
    
