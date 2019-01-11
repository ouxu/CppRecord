#include <iostream>
using namespace std;

int main()
{
	int n,m,s,a;
	while (cin>>n)
	{	
		cin>>m;
		int i;
		if (int(n/m)*m==n)
		{
			for (i=0;i<n/m;i++)
			{
				s=0;
			for (int j=1;j<=m;j++)
				s+=2*((i*m)+j);
			a=s/m;
			cout<<a<<" "; 
			}
			cout<<endl; 
		}
		else
		{
			for (i=0;i<n/m;i++)
			{
				s=0;
			for (int j=1;j<=m;j++)
				s+=2*((i*m)+j);
			a=s/m;
			cout<<a<<" "; 
			}	
		
			s=0;
			for (int j=1;j<=n-n/m*m;j++)
				s+=2*((i*m)+j);
			a=s/(n-int(n/m)*m);
			cout<<a<<endl; 
		}
				
	}
	
	return 0;
}
