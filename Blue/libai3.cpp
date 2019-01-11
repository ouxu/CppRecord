#include <iostream>
using namespace std;

int sum=0;

int dfs(int s,int f,int a)
{
	if (s>0)
		dfs(s-1,f,a*2);
	if (f>0)
		dfs(s,f-1,a-1);
	if (s==0 && f==1 && a==1)		
		sum++;
	return sum;
}
int main()
{
	dfs(5,10,2);
	cout<<sum<<endl;
	
	
	return 0;
} 
