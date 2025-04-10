#include <bits/stdc++.h>
using namespace std;


vector<char> v;
bool xet[9];
char c;

void Init()
{
    fill(xet, xet + 9, true);
}

void Res()
{
    for(auto it:v)
    {
        cout<<it;
    }
    cout<<endl;
}

bool Check() {
    for (int i = 1; i < v.size() - 1; i++) {
        if ((v[i] == 'A' || v[i] == 'E') && (v[i - 1] != 'A' && v[i - 1] != 'E') && (v[i + 1] != 'A' && v[i + 1] != 'E')) {
            return false;
        }
    }
    return true;
}



void Try(int i)
{
    for(char j='A';j<=c;j++)
    {
        if(xet[j-'A'])
        {
            v.push_back(j);
            xet[j-'A'] = false;

            if(i==int(c-'A'))
            {
                if(Check()) Res();
            }
            else
            {
                Try(i+1);
            }
            v.pop_back();
            xet[j-'A'] = true;
        }
    }
}

int main()
{
    cin>>c;
    Init();
    Try(0);
}