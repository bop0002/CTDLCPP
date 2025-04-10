#include <bits/stdc++.h>
using namespace std;

vector<char> st;
vector<int> v;
bool used[11];
void Res()
{
   for(auto it:v)
   {
      cout<<st[it];
   }
   cout<<" ";
}

void Try(int i,int n)
{
   for(int j = 0;j<n;j++)
   {
      if(!used[j])
      {
         v.push_back(j);
         used[j] = true;
         if(i==n)
         {
            Res();
         }
         else Try(i+1,n);
         used[j] = false;
         v.pop_back();
      }
   }
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      st.clear();
      v.clear();
      memset(used,false,sizeof(used));
      string s;
      cin>>s;
      int len = s.length();
      for(int i = 0;i<len;i++)
      {
         st.push_back(s[i]);
      }
      sort(st.begin(),st.end());
      Try(1,len);
      cout<<endl;

   }

}
    
