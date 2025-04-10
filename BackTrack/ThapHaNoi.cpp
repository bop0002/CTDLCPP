#include <bits/stdc++.h>
using namespace std;

void Solve(int n,char a,char b,char c)
{
    if(n>0)
    {
        Solve(n-1,a,c,b);
        cout<<a<<" -> "<<c<<endl;
        Solve(n-1,b,a,c);
    }
}

int main()
{
    int n;
    cin>>n;
    Solve(n,'A','B','C');
}