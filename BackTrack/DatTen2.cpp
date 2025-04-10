#include <bits/stdc++.h>
using namespace std;

vector<int> x;
int n;
int k;
bool OK;
void Init()
{
    x.clear();
    OK = true;
    cin>>n>>k;
    for(int i = 1 ; i <= k ; i++)
    {
        int temp;
        temp = i;
        x.push_back(i);
    }
}

void Next()
{
    int i = k-1;
    while(i>=0 && x[i] == n-k+i+1)
    {
        i--;
    }
    if(i>=0)
    {
        x[i]++;
        for(int j = i+1;j<=k;j++)
        {
            x[j] = x[i] + j - i;
        }
    }
    else{
        OK = false;
    }

}

void Res()
{
    for(auto it:x)
    {
        cout<<char(64+it);
    }
    cout<<endl;
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
    
