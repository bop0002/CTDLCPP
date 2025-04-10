#include <bits/stdc++.h>
using namespace std;

vector<int> x;
int n;

void Swap(int &x,int &y)
{
    int temp;
    temp = x;
    x=y;
    y= temp;
}

void Init()
{
    x.clear();
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int temp;
        cin>>temp;
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
    while(x[k] < x[i-1])
    {
        k--;
    }
    Swap(x[i-1],x[k]);
    if(i>0)
    {
        int l = i;
        int r = n -1;
        while(l<=r)
        {
            Swap(x[l],x[r]);
            l++;r--;
        }
    }
    
    else 
    {
        for(int j = 0;j<n;j++)
        {
            x[j] = j+1;
        }
    }

}

void Res()
{
    for(auto it:x)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        Init();
        Next();
        Res();
    }
}
    
