#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<vector<int>> v1;
vector<vector<int>> v2;

void InV1(int i)
{
    for(auto it:v1[i])
    {
        cout<<it;
    }
}
void InV2(int i)
{
    for(auto it:v2[i])
    {
        cout<<it;
    }
}


void Res()
{
    for(int i =1;i<=3;i++)
    {
        for(int j=0;j<=7;j++)
        {
            InV1(i);
            cout<<"/02/2";
            InV2(j);
            cout<<endl;
        }
    }
}

void Insert1()
{
    v1.push_back(v);
}
void Insert2()
{
    v2.push_back(v);
}
void Try1(int n)
{
    for(int i = 0;i<=2;i+=2)
    {
        v.push_back(i);
        if(n==1)
        {
            Insert1();
        }
        else
        {
            Try1(n+1);
        }
        v.pop_back();

    }
}
void Try2(int n)
{
    for(int i = 0;i<=2;i+=2)
    {
        v.push_back(i);
        if(n==2)
        {
            Insert2();
        }
        else
        {
            Try2(n+1);
        }
        v.pop_back();

    }
}

int main()
{
  Try1(0);
  v.clear();
  Try2(0);
  Res();
}