#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if (n!=0)
		{
			int a[1001]={0};
			int i,m=1;
			while (m<=n)
			{	
				cin>>i;
			
				if (i==0)
					n=n-m,m=1,a[0]=1;
				else 
				{
					int j=abs(i);
					if (a[j]==0)
						a[j]=i;
					m++;
				}
			}
		
			for (int i1=0;i1<n;i1++)
			{
				int j=abs(i);
				if (a[j]==0)
					a[j]=i;
			}
		
			for (i=1000;i>0;i--)
			{
				if (a[i]!=0)
					cout<<a[i]<<" ";
			}
			
			if (a[0]!=0)
				cout<<"0"<<endl;
			else
				cout<<endl;

		}
		else
			cout<<endl;
	} 
		
	return 0;	
} 
