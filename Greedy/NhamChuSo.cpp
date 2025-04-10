#include <bits/stdc++.h>
using namespace std;

void MinSum(string& a,string& b)
{
    for(int i = 0;i<a.size();i++)
    {
        if(a[i]=='6') a[i] = '5';
    }
    for(int i = 0;i<b.size();i++)
    {
        if(b[i]=='6') b[i] = '5';
    }
}

void MaxSum(string& a,string& b)
{
    for(int i = 0;i<a.size();i++)
    {
        if(a[i]=='5') a[i] = '6';
    }
    for(int i = 0;i<b.size();i++)
    {
        if(b[i]=='5') b[i] = '6';
    }
}
int main() {
    string a,b;
    cin>>a>>b;
    MinSum(a,b);
    cout<<stoi(a)+stoi(b)<<" ";
    MaxSum(a,b);
    cout<<stoi(a)+stoi(b);
}
