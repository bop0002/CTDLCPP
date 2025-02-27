#include <bits/stdc++.h>
#include <stack>
using namespace std;

void Show(stack<long long> &res)
{
	if(res.empty())
	{
		cout<<"NONE";
		return;
	}
	cout<<res.top();
}
void Push(stack<long long> &res)
{
	long long n;
	cin>>n;
	res.push(n);
}

void Pop(stack<long long> &res)
{
	if(!res.empty())
    {
        res.pop();
    }
}

int main()
{
	int n;
	cin>>n;
	stack<long long> res;
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


