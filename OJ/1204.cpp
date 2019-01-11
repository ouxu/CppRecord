#include <iostream>
using namespace std;
int main ()
{
	int n,m=0,min,cs=0;
	cin>>n;
	int N[n],I[n],M[n];
	for (int i=0;i<n;i++)
		cin>>N[i];
	for (int j=0;j<n;j++)
	{
		for (int k=j+1;k<n;k++)
		{   
			if  (N[j]==N[k]) 
				{   
					M[m]=N[j];
					m++;	  	
				}
		}
	}
	min=M[0];
	for (int i=0;i<m;i++)
	{
		if(min>=M[i])
		min=M[i];	
	}
	for (int i=0;i<n;i++)
		{if (min==N[i])
		     cs++;
		}
	cout<<min<<endl<<cs<<endl; 
	return 0;
}
