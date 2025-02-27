#include <bits/stdc++.h>
using namespace std;

int n;int k;
int x[101];
int y[101];
vector<vector<int>> a;
int cnt;
bool OK;
int temp=0;
void Input()
{
    cin>>n>>k;
    for(int i = 0 ; i <n;i++)
    {
        cin>>y[i];
    }
}
void Init()
{
    for(int i = 0 ; i <cnt;i++)
    {
        x[i] = y[i];
    }
}
void Res()
{
    vector<int> temp;
    for(int i = 0;i<cnt;i++)
    {
        temp.push_back(x[i]);
    }
    a.push_back(temp);
}
void Print()
{
    sort(a.begin(),a.end(),greater<vector<int>>());
    for(auto it:a)
    {
        for(auto itt:it)
        {
            cout<<itt<< " ";
        }
        cout<<endl;
    }
    cout<<temp;
}
void Next()
{
    int i = cnt - 1;  
    while (i >= 0 && x[i] == y[n - cnt + i]) {  
        i--;  
    }
    
    if (i >= 0) {
        int pos = 0;
        while (y[pos] != x[i]) pos++;  
        x[i] = y[pos + 1];  

        for (int j = i + 1; j < cnt; j++) {
            x[j] = y[pos + (j - i) + 1];  
        }
    } else {
        OK = false;  
    }
}
bool Check()
{
    int res =0;
    for(int i = 0 ;i<cnt;i++)
    {
        res+=x[i];
    }
    return res==k;
}
int main() {
    Input();
    for(cnt=1;cnt<=n;cnt++)
    {
        OK = true;
        Init();
        while(OK)
        {
            if(Check())
            {
                temp++;
                Res();
            }
            Next();
        }
    }
    Print();
}
    
