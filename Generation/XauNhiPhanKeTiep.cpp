#include <bits/stdc++.h>
using namespace std;

vector<char> x;
void Init()
{
    string s;
    x.clear();
    getline(cin,s);
    for(int i = 0 ; i < s.length();i++)
    {
        x.push_back(s[i]);
    }
    
}
void Next()
{
    int i = x.size()-1;
    while(i>0 && x[i] != '0')
    {
        x[i] = '0';
        i--;
    }
    if(i==0)
    {
        x[i] = '0';
    }
    else x[i] = '1';
}
void Res()
{
    for(int i =0;i<x.size();i++)
    {
        cout<<x[i];
    }
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        Init();
        Next();
        Res();
    }
}
    
