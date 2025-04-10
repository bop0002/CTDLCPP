#include <bits/stdc++.h>
using namespace std;


void Back_track(int a[],int n)
{
    if(n==0)return;
    int x[n-1];
    for(int i =0;i<n-1;i++)
    {
        x[i] = a[i] + a[i+1];
    }
    cout << "[";
    for(int i =0;i<n;i++)
    {
        if(i>0) cout<<" ";
        cout<<a[i];
    }
    cout<<"]"<<endl;
    Back_track(x,n-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n];
        for(int i =0;i<n;i++)
        {
            cin>>x[i];
        }
        Back_track(x,n);
    }
}
    
