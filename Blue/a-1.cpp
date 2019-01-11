#include <iostream>
using namespace std;

int t[11];

void dfs(int n,int s)
{
	int i=0;
	if (n<11)
	{
		t[n]=0;
		dfs(n+1,s-n);
		t[n]=1;
		dfs(n+1,s*2);
	}
	if (n>=11&&s==100)
	{
		for (i=1;i<11;i++)
			cout<<t[i];
		cout<<endl;	
	}	
	
}

int main()
{
	dfs(1,10);
	
	
	return 0;
	
}

