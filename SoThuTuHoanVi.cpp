#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> mp;
vector<int> x;
vector<int> input;
int n;
bool OK;
int cnt;
void Swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Init()
{
    cnt = 1;
    input.clear();
    mp.clear();
    x.clear();
    OK = true;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int temp;
        cin>>temp;
        input.push_back(temp);
    }
    for(int i = 1 ; i <= n; i++)
    {
        int temp;
        temp = i;
        x.push_back(temp);
    }
}
void Next()
{
    int i = n-1;
    while(i>0 && x[i-1] > x[i])
    {
        i--;
    }
    int k = n-1;
    while(x[i-1] > x[k])
    {
        k--;
    }
    if(i>0)
    {
        swap(x[i-1],x[k]);
        reverse(x.begin()+i,x.end());
    }
    else OK = false;
}
void Insert()
{
    mp[cnt]= x;
    cnt++;
}
void Res()
{
    for(auto [key,vec]:mp)
    {
        if(vec==input)
        {
            cout<<key<<endl;
            return;
        } 
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        Init();
        while(OK)
        {
            Insert();
            Next();
        }
        Res();
    }
}
    
