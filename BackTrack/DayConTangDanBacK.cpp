#include <bits/stdc++.h>
using namespace std;

int cnt;
int n,k;
vector<int> v;
// vector<vector<int>> res;
void Input()
{
    cnt =0;
    cin>>n>>k;
    for(int i =0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
}

void Try(int i,vector<int> path)
{
    if(path.size()==k)
    {
        cnt++;
        return;
    }

    for(int j =i;j<n;j++)
    {
        if(path.size()==0||v[j]>path.back())
        {
            path.push_back(v[j]);
            Try(j,path);
            path.pop_back();
        }
    }

}

int main() {
    Input();
    Try(0,{});
    // for(auto it:res)
    // {
    //     for(auto itt:it)
    //     {
    //         cout<<itt<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<cnt;
}
    
