#include <bits/stdc++.h>
using namespace std;

char X[11];
int n;
bool OK =true;

bool Check()
{
    int l =0;
    int r =n-1;
    while(l<=r)
    {
        if(X[l]!=X[r])
        {
            return false;
        }
        l++;r--;
    }
    return true;
}
void Init()
{
    cin>>n;
    for(int i = 0 ; i <n;i++)
    {
        X[i] = '0';
    }
}
void Res()
{
    for(int i = 0;i<n;i++)
    {
        cout<<X[i]<<" ";
    }
    cout<<endl;
}
void Next()
{
    int i = n;
    while(i--&& X[i]!='0')
    {
        X[i]='0';
    }
    if(i<0) OK = false;
    else X[i] = '1';
}
int main() {
   Init();
   while(OK)
   {
        if(Check()) Res();
        Next();
   }
}
