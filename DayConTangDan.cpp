#include <bits/stdc++.h>
using namespace std;

int n;
set<string> st;
vector<int> v;
vector<int> v2;
void Input()
{
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
}

void Try(int i)
{
    for(int j=i;j<n;j++)
    {
        if(v2.size()==0||v[j]>v2.back())
        {
            v2.push_back(v[j]);
            if(v2.size()>1)
            {
                string s="";
                for(auto it:v2)
                {
                    s+=to_string(it)+" ";
                }
                s.pop_back();
                st.insert(s);
            }
            Try(j+1);
            v2.pop_back();
        }
    }
}

void Res()
{
    for(auto it:st)
    {
        cout<<it<<endl;
    }
}

int main() {
  
    Input();
    Try(0);
    Res();
}
    
