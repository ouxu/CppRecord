#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
	int a[1005]={0},i,x,n,N;
	cin>>N;
	x=N;
	
	for (i=1;i<=N;i++)
	 	{ 	cin>>n;	
	 		if (a[n]==1)
	 			x--;
	 		a[n]=1;	
		}
		
	cout<<x<<endl;
	
	for (i=0;i<1001;i++)
	{
		if (a[i]==1)
		cout<<i<<" ";
	}
	
	return 0;	
} 
