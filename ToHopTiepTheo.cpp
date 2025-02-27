#include <bits/stdc++.h>
using namespace std;

int n;
int k;
int x[41];
int y[41];
set<int> st;
bool OK;
void Init()
{
    OK = true;
    cin>>n>>k;
    for(int i = 1 ; i<=k;i++)
    {
        cin>>x[i];
    }
}

void Next()
{
    int i = k;
    while(i>0 && x[i] == n-k+i)
    {
        i--;
    }
    if(i>0)
    {
        y[i] = x[i]+1;
        for(int j = 1;j<i;j++)
        {
            y[j] = x[j];
        }
        for(int j = i+1;j<=k;j++)
        {
            y[j] = y[i] + j-i; 
        }
    }
    else{
        OK = false;
    }
}

void Res()
{
    st.clear();
    for(int i = 1;i<=k;i++)
    {
        st.insert(x[i]);
        st.insert(y[i]);
    }
    cout<<st.size()-k<<endl;

}

int main() {
   int t;
   cin>>t;
   cin.ignore();
   while(t--)
   {
        Init();
        Next();
        if(OK) Res();
        else cout<<k<<endl;
   }
}
    
