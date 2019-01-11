#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	
	while (cin>>n)
	{
		if (n==0)
			break;
		else
		{	
			int a[1000],b[1000];
			memset(a,0,sizeof(a));
			memset(b,0,sizeof(b));
			int i;
			
			for (i=0;i<n;i++)
				cin>>a[i];
			
			for (i=0;i<n;i++)
				cin>>b[i];
				
			sort(a,a+n);
			sort(b,b+n);	
			
			int count=0;
			for (int j=n;j>=0;j--)
			{
				for (int k=n-1;k>=0;k--)
				{
					if (a[k]>b[j])
					{
						a[k]=0;
						count++;
						break;
					}
				}	
			}	
					
			if (count>n/2)
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
		}		
	}
	
	return 0;	
}
