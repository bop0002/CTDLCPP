#include <bits/stdc++.h>
using namespace std;

int n,k;
int X[20];

void Init()
{
	cin>>n>>k;
}

void Solve(int i)
{	
	for(int j = X[i-1]+1;j<=n-k+i;j++)
	{
		X[j] 
	}
}

void Res(int k)
{
	for(int i = 1;i<=7;i++)
	{
		cout<<X[i]<<setw(7);
	}
}

int main() {
	Init();
	X[0] = 0;
	Solve(1);
}
