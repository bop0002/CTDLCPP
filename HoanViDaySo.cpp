#include <bits/stdc++.h>
using namespace std;

vector<int> x;
int n;
vector <int> v;
set<int> st;
bool OK;
void Init()
{
    OK = true;
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    v.assign(st.begin(),st.end());
    n = v.size();
    for(int i = 1;i<=n;i++)
    {
        x.push_back(i);
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
    while(x[k] < x[i-1])
    {
        k--;
    }
    if(i>0)
    {
        swap(x[k],x[i-1]);
        reverse(x.begin()+i,x.end());
    }
    else OK = false;

}

void Res()
{
    for(auto it:x)
    {
        cout<<v[it-1]<<" ";
    }
    cout<<endl;
}
int main() {
    Init();
    while(OK)
    {
        Res();
        Next();
    }
}
    
