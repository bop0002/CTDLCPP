#include <bits/stdc++.h>
using namespace std;

vector<char> x;

void Init()
{
    x.clear();
    string s;
    getline(cin,s);
    x.insert(x.begin(),s.begin(),s.end());
}

void Next()
{
    int i = x.size()-1;
    while(i>0 && x[i] != '1' )
    {
        x[i] = '1';
        i--;
    }
    if(i>0)
    {
        x[i] = '0';
    }
    else{
        for(auto &it : x)
        {
            it = '1';
        }
    }
}
void Res()
{
    for(auto it:x)
    {
        cout<<it;
    }
    cout<<endl;
}

int main() {
   int t;
   cin>>t;
   cin.ignore();
   while(t--)
   {
        Init();
        Next();
        Res();
   }
}
    
