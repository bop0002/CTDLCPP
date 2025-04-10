#include <bits/stdc++.h>
#include <stack>
using namespace std;

void Show(stack<int> &res)
{
	if(res.empty())
	{
		cout<<"NONE";
		return;
	}
	cout<<res.top();
}
void Push(stack<int> &res)
{
	int n;
	cin>>n;
	res.push(n);
}

void Pop(stack<int> &res)
{
	res.pop();
}

int main()
{
	int n;
	cin>>n;
	stack<int> res;
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="PUSH")
		{
			Push(res);
		}
		else if(s=="PRINT")
		{
			Show(res);
		}
		else if(s=="POP")
		{
			Pop(res);
		}
		cout<<endl;
	}
	
}


