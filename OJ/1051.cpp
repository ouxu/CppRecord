#include <iostream>
using namespace std;
int main()
{
	int N,n,i,j,s=1,t;
	cin>>N;
	for (n=2;n<=N;n++)
	{
		for (i=2;i<n;i++)
		{
			if (n%i==0)
			{
				s+=i;
			}	
		}
		if (s==n)
		{
		cout<<s<<" its factors are 1 ";
		for (i=2;i<n;i++)
			{
				if (n%i==0)
					cout<<i<<" ";	
			}
		cout<<endl; 
		}
		s=1;		
	}
	return 0;
}
