#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> a;
string res;
bool found;
vector<string> path;
void Input()
{
    found = false;
    res = "";
    path.clear();
    a.clear();
    cin>>n;
    a.assign(n,vector<int>(n));
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Back_track(int x,int y) 
{
   if(x==n-1&&y==n-1)
   {
      path.push_back(res);
      found = true;
      return;
   }
   if( y<n-1  && a[x][y+1]==1 )
   {
      res+='R';
      Back_track(x,y+1);
      res.pop_back();
   }
   if(x <n-1 && a[x+1][y]==1)
   {
      res+='D';
      Back_track(x+1,y);
      res.pop_back();
   }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
 
        Input();
        if(a[0][0]==0||a[n-1][n-1]==0)
        {
            cout<<"-1";
        }
        else{

            Back_track(0,0);
            if(!found) cout<<"-1";
            else
            {
                // sort(path.begin(),path.end());
                for(auto it:path)
                {
                    cout<<it<<" ";
                }
            }
        }
        cout<<endl;
    }


}
    
