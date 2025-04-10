#include <bits/stdc++.h>
using namespace std;

vector<int> x;
int n;
bool OK;

void Swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Init()
{
    x.clear();
    OK = true;
    cin>>n;
    for(int i = n ; i >= n; i--)
    {
        int temp;
        temp = i;
        x.push_back(temp);
    }
}

void Next()
{
   
}

void Res()
{
    for(auto it : x)
    {
        cout<<it;
    }
    cout<<" ";
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        Init();
        while(OK)
        {
            Res();
            Next();
        }
        cout<<endl;

    }
}
    
