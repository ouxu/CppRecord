#include <iostream>
using namespace std;

int count=0;

void dfs(int n,int s,int f)
{
	if (s<0||f<0||n<0)
		return;
	
	if (s==0&&f==0&&n==1)
	{
		count++;
		dfs(n*2,s-1,f);
		dfs(n-1,s,f-1);
		return;
	}	
		
	
	
}

int main()
{
	dfs(2,5,10);
	cout<<count<<endl;
	
	return 0;	
} 
