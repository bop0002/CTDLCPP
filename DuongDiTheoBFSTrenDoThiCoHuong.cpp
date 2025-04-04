#include <bits/stdc++.h>
using namespace std;

int v,e,u,t;
vector<vector<int>> a;
vector<bool> visited;
vector<int> res;
vector<int> p;
bool OK;
void Input()
{
    res.clear();
    OK = false;
    cin>>v>>e>>u>>t;
    visited.assign(v+1,false);
    p.assign(v+1,-1);
    a.clear();
    a.resize(v+1);

    for(int i =0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
    }
}

void BFS(int i)
{
    queue<int> q;
    visited[i] = true;
    q.push(i);
    while(!q.empty())
    {
        int temp = q.front();

        
        res.push_back(temp);

        if(temp == t)
        {
            OK = true;
            return;
        } 

        q.pop();

        for(auto it:a[temp])
        {
            if(!visited[it])
            {
                p[it] = temp; 
                visited[it] = true;
                q.push(it);
            }
        }

    }  
}

void Res() {
    vector<int> path;
    for (int cur = t; cur != -1; cur = p[cur]) {
        path.push_back(cur);
    }
    reverse(path.begin(), path.end()); 

    for (int it : path) {
        cout << it << " ";
    }
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        Input();
        BFS(u);
        if(OK) Res();
        else cout<<"-1";
        cout<<endl;
    }
}
