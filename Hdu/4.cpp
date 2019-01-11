#include <iostream>
#include <cmath>
using namespace std;

int prima(int i)
{
	int j;
	for (j=2;j<=sqrt(sqrt(i));j++)
	{
		if (i%j==0)
			break;
	} 
	if (j==(sqrt(sqrt(i))+1))
		return 1;
	else
		return 0;
	
}

int main()
{
	int t,n;
	cin>>t;
	for (int i1=0;i1<t;i1++)
	{
		cin>>n;
		int i=0,j=0,x;
		for (i=n;i<n*n;i++)
		{
			x=sqrt(i);
			if (x*x==i)
			{
				if (prima(x))
				break;
			}
		}
		
		for (j=n;j>=4;j--)
		{
			x=sqrt(j);
			if (prima(x))
				break;
		}
		cout<<i<<"  "<<j<<endl;
		((i-n)>(n-j))?(cout<<j<<endl):(cout<<i-1<<endl);
	} 
	
	
	
	return 0;	
}
