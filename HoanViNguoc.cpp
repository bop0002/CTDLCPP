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
    for(int i = n ; i >= 1; i--)
    {
        int temp;
        temp = i;
        x.push_back(temp);
    }
}

void Next()
{
   int i = n-1;
   while(i>0 && x[i-1] < x[i] )
   {
        i--;
   }
   int k = n-1;
   while(x[i-1] < x[k] )
   {
    k--;
   }

   if(i>0)
   {
        swap(x[i-1],x[k]);
        reverse(x.begin()+ i ,x.end());
   }
   else OK = false;
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
    
