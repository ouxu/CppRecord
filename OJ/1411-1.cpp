#include <iostream>

using namespace std;

int main()
{
	int t,i,n;
	cin>>t;
	int j,k,l;
	
	for (i=0;i<t;i++)
	{	
		cin>>n;
		int a[n];
		
		for (j=0;j<n;j++)
			cin>>a[j];
		
		for (k=0;k<n;k++)
		for (l=k;l<n;l++)
			{	
				if (a[k]>a[l])
					{
						int t;
						t=a[k];
						a[k]=a[l];
						a[l]=t;
					}	
			}		
		for (j=0;j<n-1;j++)
			cout<<a[j]<<" ";		
		cout<<a[n-1]<<endl;
	}
	
	return 0;
}
