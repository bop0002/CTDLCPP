#include <bits/stdc++.h>
using namespace std;

int prime[1000001];
vector<int> nt;
vector<int> v;
vector<vector<int>> res;
int n,p,s;
int in;
int cnt;
bool OK;
void Input()
{
    OK =false;
    cnt =0;
    v.clear();
    res.clear();
    v.push_back(0);
    cin>>n>>p>>s;
    auto it = find(nt.begin(),nt.end(),p);
    in = it-nt.begin();
}

void Sieve()
{
    for(int i=0;i<=100000;i++)
    {
        prime[i]=1;
    }
    prime[0]=0;prime[1]=0;
    for(int i =2;i<=sqrt(100000);i++)
    {
        if(prime[i])
        {
            if(i<200) nt.push_back(i);
            for(int j = i*i;j<=100000;j+=i)
            {
                prime[j]=0;
            }
        }
    }
}

void Res()
{
    cout<<res.size()<<endl;;
    for(auto it:res)
    {
        for(int i=1;i<it.size();i++)
        {
            cout<<it[i]<<" ";
        }
        cout<<endl;
    }
}

void Try(int i,int plus)
{
    if(plus>s) return;
    for(int j = i+1;j<nt.size();j++)
    {
        v.push_back(nt[j]);
        plus+=nt[j];
        if( v.size()==n+1 && plus==s)
        {
            res.push_back(v);
        }
        else{
            Try(j,plus);
        }
        v.pop_back();
        plus-=nt[j];
    }
}

int main() {
    Sieve();
    int t;
    cin>>t;
    while(t--)
    {
        Input();
        Try(in,0);
        Res();
    }

}
    
