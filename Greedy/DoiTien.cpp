#include <bits/stdc++.h>
using namespace std;

int a[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int cnt =0;
        int n;
        cin>>n;
        int i = 9;
        while(n)
        {
            while(n>=a[i])
            {
                cnt++;
                n-=a[i];
            }
            i--;
        }
        cout<<cnt<<endl;
    }
}
