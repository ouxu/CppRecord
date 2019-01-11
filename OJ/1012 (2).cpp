#include <iostream>
using namespace std;

int a,b,n;
int f(int n) 
{
if (n==1)
	return a;
else if (n==2)
	return b;
else if (n%2!=0)
	return f(n-1)+f(n-2);
else 
	return f(n-1)+f(n-2)+f(n-3);
}
int main()
{
	int t;
	cin>>t;	 
	for (int i=0;i<t;i++)
	{
	    cin>>a>>b>>n; 
		cout<<f(n)<<endl; 
	}
	return 0;
}
