#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> visted;
int v,e,u;

void Input() {
    cin >> v >> e ;
    a.assign(v + 1, vector<int>(v + 1, 0));
    visted.assign(v+1,false);

    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1; 
    }
}

void Res() {
    for (int i = 1; i <= v; i++) { 
        for (int j = 1; j <= v; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void DFS(int u)
{
    visted[u] = true;
    cout<<u<<" ";
    for(int j = 1;j<=v;j++)
    {
        if(a[u][j]==1 && visted[j]==false)
        {
            DFS(j);
        }
    }
}

int main()
{

    Input();
    Res();


}
    
